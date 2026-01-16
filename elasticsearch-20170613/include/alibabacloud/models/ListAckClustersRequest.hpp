// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACKCLUSTERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACKCLUSTERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListAckClustersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAckClustersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAckClustersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    ListAckClustersRequest() = default ;
    ListAckClustersRequest(const ListAckClustersRequest &) = default ;
    ListAckClustersRequest(ListAckClustersRequest &&) = default ;
    ListAckClustersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAckClustersRequest() = default ;
    ListAckClustersRequest& operator=(const ListAckClustersRequest &) = default ;
    ListAckClustersRequest& operator=(ListAckClustersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->page_ == nullptr
        && this->size_ == nullptr && this->vpcId_ == nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListAckClustersRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListAckClustersRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListAckClustersRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The number of the page to return.
    shared_ptr<int32_t> page_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> size_ {};
    // The ID of the virtual private cloud (VPC) to which the ACK clusters belong.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
