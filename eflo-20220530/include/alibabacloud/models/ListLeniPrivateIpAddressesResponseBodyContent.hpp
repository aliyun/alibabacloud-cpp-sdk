// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLENIPRIVATEIPADDRESSESRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTLENIPRIVATEIPADDRESSESRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLeniPrivateIpAddressesResponseBodyContentData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListLeniPrivateIpAddressesResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLeniPrivateIpAddressesResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListLeniPrivateIpAddressesResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListLeniPrivateIpAddressesResponseBodyContent() = default ;
    ListLeniPrivateIpAddressesResponseBodyContent(const ListLeniPrivateIpAddressesResponseBodyContent &) = default ;
    ListLeniPrivateIpAddressesResponseBodyContent(ListLeniPrivateIpAddressesResponseBodyContent &&) = default ;
    ListLeniPrivateIpAddressesResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLeniPrivateIpAddressesResponseBodyContent() = default ;
    ListLeniPrivateIpAddressesResponseBodyContent& operator=(const ListLeniPrivateIpAddressesResponseBodyContent &) = default ;
    ListLeniPrivateIpAddressesResponseBodyContent& operator=(ListLeniPrivateIpAddressesResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->total_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListLeniPrivateIpAddressesResponseBodyContentData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListLeniPrivateIpAddressesResponseBodyContentData>) };
    inline vector<Models::ListLeniPrivateIpAddressesResponseBodyContentData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListLeniPrivateIpAddressesResponseBodyContentData>) };
    inline ListLeniPrivateIpAddressesResponseBodyContent& setData(const vector<Models::ListLeniPrivateIpAddressesResponseBodyContentData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListLeniPrivateIpAddressesResponseBodyContent& setData(vector<Models::ListLeniPrivateIpAddressesResponseBodyContentData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListLeniPrivateIpAddressesResponseBodyContent& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListLeniPrivateIpAddressesResponseBodyContent& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The response parameters.
    std::shared_ptr<vector<Models::ListLeniPrivateIpAddressesResponseBodyContentData>> data_ = nullptr;
    // Resource group instance ID
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
