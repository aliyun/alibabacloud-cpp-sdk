// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASETSMARTQSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASETSMARTQSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDatasetSmartqStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDatasetSmartqStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDatasetSmartqStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
    };
    QueryDatasetSmartqStatusRequest() = default ;
    QueryDatasetSmartqStatusRequest(const QueryDatasetSmartqStatusRequest &) = default ;
    QueryDatasetSmartqStatusRequest(QueryDatasetSmartqStatusRequest &&) = default ;
    QueryDatasetSmartqStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDatasetSmartqStatusRequest() = default ;
    QueryDatasetSmartqStatusRequest& operator=(const QueryDatasetSmartqStatusRequest &) = default ;
    QueryDatasetSmartqStatusRequest& operator=(QueryDatasetSmartqStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cubeId_ != nullptr; };
    // cubeId Field Functions 
    bool hasCubeId() const { return this->cubeId_ != nullptr;};
    void deleteCubeId() { this->cubeId_ = nullptr;};
    inline string cubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
    inline QueryDatasetSmartqStatusRequest& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


  protected:
    // Dataset ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> cubeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
