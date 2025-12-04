// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLNIPRIVATEIPADDRESSRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTLNIPRIVATEIPADDRESSRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLniPrivateIpAddressResponseBodyContentData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListLniPrivateIpAddressResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLniPrivateIpAddressResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListLniPrivateIpAddressResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListLniPrivateIpAddressResponseBodyContent() = default ;
    ListLniPrivateIpAddressResponseBodyContent(const ListLniPrivateIpAddressResponseBodyContent &) = default ;
    ListLniPrivateIpAddressResponseBodyContent(ListLniPrivateIpAddressResponseBodyContent &&) = default ;
    ListLniPrivateIpAddressResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLniPrivateIpAddressResponseBodyContent() = default ;
    ListLniPrivateIpAddressResponseBodyContent& operator=(const ListLniPrivateIpAddressResponseBodyContent &) = default ;
    ListLniPrivateIpAddressResponseBodyContent& operator=(ListLniPrivateIpAddressResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->total_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListLniPrivateIpAddressResponseBodyContentData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListLniPrivateIpAddressResponseBodyContentData>) };
    inline vector<Models::ListLniPrivateIpAddressResponseBodyContentData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListLniPrivateIpAddressResponseBodyContentData>) };
    inline ListLniPrivateIpAddressResponseBodyContent& setData(const vector<Models::ListLniPrivateIpAddressResponseBodyContentData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListLniPrivateIpAddressResponseBodyContent& setData(vector<Models::ListLniPrivateIpAddressResponseBodyContentData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListLniPrivateIpAddressResponseBodyContent& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListLniPrivateIpAddressResponseBodyContent& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The returned result.
    std::shared_ptr<vector<Models::ListLniPrivateIpAddressResponseBodyContentData>> data_ = nullptr;
    // Resource group instance ID
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
