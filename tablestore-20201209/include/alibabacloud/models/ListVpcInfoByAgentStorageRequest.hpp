// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCINFOBYAGENTSTORAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCINFOBYAGENTSTORAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class ListVpcInfoByAgentStorageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcInfoByAgentStorageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcInfoByAgentStorageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListVpcInfoByAgentStorageRequest() = default ;
    ListVpcInfoByAgentStorageRequest(const ListVpcInfoByAgentStorageRequest &) = default ;
    ListVpcInfoByAgentStorageRequest(ListVpcInfoByAgentStorageRequest &&) = default ;
    ListVpcInfoByAgentStorageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcInfoByAgentStorageRequest() = default ;
    ListVpcInfoByAgentStorageRequest& operator=(const ListVpcInfoByAgentStorageRequest &) = default ;
    ListVpcInfoByAgentStorageRequest& operator=(ListVpcInfoByAgentStorageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentStorageName_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr; };
    // agentStorageName Field Functions 
    bool hasAgentStorageName() const { return this->agentStorageName_ != nullptr;};
    void deleteAgentStorageName() { this->agentStorageName_ = nullptr;};
    inline string getAgentStorageName() const { DARABONBA_PTR_GET_DEFAULT(agentStorageName_, "") };
    inline ListVpcInfoByAgentStorageRequest& setAgentStorageName(string agentStorageName) { DARABONBA_PTR_SET_VALUE(agentStorageName_, agentStorageName) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline ListVpcInfoByAgentStorageRequest& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListVpcInfoByAgentStorageRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The agent storage name.
    // 
    // This parameter is required.
    shared_ptr<string> agentStorageName_ {};
    // The page number.
    shared_ptr<int64_t> pageNum_ {};
    // The number of VPCs per page for the query.
    shared_ptr<int64_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
