// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEINPUTSCHEMARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNODEINPUTSCHEMARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetNodeInputSchemaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeInputSchemaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ColNames, colNames_);
      DARABONBA_PTR_TO_JSON(ColTypes, colTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeInputSchemaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ColNames, colNames_);
      DARABONBA_PTR_FROM_JSON(ColTypes, colTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNodeInputSchemaResponseBody() = default ;
    GetNodeInputSchemaResponseBody(const GetNodeInputSchemaResponseBody &) = default ;
    GetNodeInputSchemaResponseBody(GetNodeInputSchemaResponseBody &&) = default ;
    GetNodeInputSchemaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeInputSchemaResponseBody() = default ;
    GetNodeInputSchemaResponseBody& operator=(const GetNodeInputSchemaResponseBody &) = default ;
    GetNodeInputSchemaResponseBody& operator=(GetNodeInputSchemaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->colNames_ == nullptr
        && return this->colTypes_ == nullptr && return this->requestId_ == nullptr; };
    // colNames Field Functions 
    bool hasColNames() const { return this->colNames_ != nullptr;};
    void deleteColNames() { this->colNames_ = nullptr;};
    inline const vector<string> & colNames() const { DARABONBA_PTR_GET_CONST(colNames_, vector<string>) };
    inline vector<string> colNames() { DARABONBA_PTR_GET(colNames_, vector<string>) };
    inline GetNodeInputSchemaResponseBody& setColNames(const vector<string> & colNames) { DARABONBA_PTR_SET_VALUE(colNames_, colNames) };
    inline GetNodeInputSchemaResponseBody& setColNames(vector<string> && colNames) { DARABONBA_PTR_SET_RVALUE(colNames_, colNames) };


    // colTypes Field Functions 
    bool hasColTypes() const { return this->colTypes_ != nullptr;};
    void deleteColTypes() { this->colTypes_ = nullptr;};
    inline const vector<string> & colTypes() const { DARABONBA_PTR_GET_CONST(colTypes_, vector<string>) };
    inline vector<string> colTypes() { DARABONBA_PTR_GET(colTypes_, vector<string>) };
    inline GetNodeInputSchemaResponseBody& setColTypes(const vector<string> & colTypes) { DARABONBA_PTR_SET_VALUE(colTypes_, colTypes) };
    inline GetNodeInputSchemaResponseBody& setColTypes(vector<string> && colTypes) { DARABONBA_PTR_SET_RVALUE(colTypes_, colTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNodeInputSchemaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<string>> colNames_ = nullptr;
    std::shared_ptr<vector<string>> colTypes_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
