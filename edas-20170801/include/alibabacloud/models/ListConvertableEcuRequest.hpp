// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONVERTABLEECUREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONVERTABLEECUREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListConvertableEcuRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConvertableEcuRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConvertableEcuRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
    };
    ListConvertableEcuRequest() = default ;
    ListConvertableEcuRequest(const ListConvertableEcuRequest &) = default ;
    ListConvertableEcuRequest(ListConvertableEcuRequest &&) = default ;
    ListConvertableEcuRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConvertableEcuRequest() = default ;
    ListConvertableEcuRequest& operator=(const ListConvertableEcuRequest &) = default ;
    ListConvertableEcuRequest& operator=(ListConvertableEcuRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListConvertableEcuRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // The ID of the cluster. You can call the ListCluster operation to query the cluster ID. For more information, see [ListCluster](https://help.aliyun.com/document_detail/154995.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
