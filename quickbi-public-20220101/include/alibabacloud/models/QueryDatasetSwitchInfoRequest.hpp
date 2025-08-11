// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASETSWITCHINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASETSWITCHINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDatasetSwitchInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDatasetSwitchInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDatasetSwitchInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
    };
    QueryDatasetSwitchInfoRequest() = default ;
    QueryDatasetSwitchInfoRequest(const QueryDatasetSwitchInfoRequest &) = default ;
    QueryDatasetSwitchInfoRequest(QueryDatasetSwitchInfoRequest &&) = default ;
    QueryDatasetSwitchInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDatasetSwitchInfoRequest() = default ;
    QueryDatasetSwitchInfoRequest& operator=(const QueryDatasetSwitchInfoRequest &) = default ;
    QueryDatasetSwitchInfoRequest& operator=(QueryDatasetSwitchInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cubeId_ != nullptr; };
    // cubeId Field Functions 
    bool hasCubeId() const { return this->cubeId_ != nullptr;};
    void deleteCubeId() { this->cubeId_ = nullptr;};
    inline string cubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
    inline QueryDatasetSwitchInfoRequest& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> cubeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
