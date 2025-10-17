// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBNODESPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBNODESPARAMETERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBNodesParametersResponseBodyDBNodeIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBNodesParametersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBNodesParametersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBNodeIds, DBNodeIds_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBNodesParametersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBNodeIds, DBNodeIds_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBNodesParametersResponseBody() = default ;
    DescribeDBNodesParametersResponseBody(const DescribeDBNodesParametersResponseBody &) = default ;
    DescribeDBNodesParametersResponseBody(DescribeDBNodesParametersResponseBody &&) = default ;
    DescribeDBNodesParametersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBNodesParametersResponseBody() = default ;
    DescribeDBNodesParametersResponseBody& operator=(const DescribeDBNodesParametersResponseBody &) = default ;
    DescribeDBNodesParametersResponseBody& operator=(DescribeDBNodesParametersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBNodeIds_ == nullptr
        && return this->DBType_ == nullptr && return this->DBVersion_ == nullptr && return this->engine_ == nullptr && return this->requestId_ == nullptr; };
    // DBNodeIds Field Functions 
    bool hasDBNodeIds() const { return this->DBNodeIds_ != nullptr;};
    void deleteDBNodeIds() { this->DBNodeIds_ = nullptr;};
    inline const vector<DescribeDBNodesParametersResponseBodyDBNodeIds> & DBNodeIds() const { DARABONBA_PTR_GET_CONST(DBNodeIds_, vector<DescribeDBNodesParametersResponseBodyDBNodeIds>) };
    inline vector<DescribeDBNodesParametersResponseBodyDBNodeIds> DBNodeIds() { DARABONBA_PTR_GET(DBNodeIds_, vector<DescribeDBNodesParametersResponseBodyDBNodeIds>) };
    inline DescribeDBNodesParametersResponseBody& setDBNodeIds(const vector<DescribeDBNodesParametersResponseBodyDBNodeIds> & DBNodeIds) { DARABONBA_PTR_SET_VALUE(DBNodeIds_, DBNodeIds) };
    inline DescribeDBNodesParametersResponseBody& setDBNodeIds(vector<DescribeDBNodesParametersResponseBodyDBNodeIds> && DBNodeIds) { DARABONBA_PTR_SET_RVALUE(DBNodeIds_, DBNodeIds) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeDBNodesParametersResponseBody& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDBNodesParametersResponseBody& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBNodesParametersResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBNodesParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the nodes.
    std::shared_ptr<vector<DescribeDBNodesParametersResponseBodyDBNodeIds>> DBNodeIds_ = nullptr;
    // The type of the database engine. Set the value to **MySQL**.
    std::shared_ptr<string> DBType_ = nullptr;
    // The version of the MySQL database engine. Valid values:
    // 
    // *   **5.6**
    // *   **5.7**
    // *   **8.0**
    std::shared_ptr<string> DBVersion_ = nullptr;
    // The cluster engine.
    std::shared_ptr<string> engine_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
