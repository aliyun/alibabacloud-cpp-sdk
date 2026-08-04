// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERGETMEMBERBALANCELOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERGETMEMBERBALANCELOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterGetMemberBalanceLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterGetMemberBalanceLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(changeType, changeType_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(skipTotal, skipTotal_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterGetMemberBalanceLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(changeType, changeType_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(skipTotal, skipTotal_);
    };
    ModelRouterGetMemberBalanceLogsRequest() = default ;
    ModelRouterGetMemberBalanceLogsRequest(const ModelRouterGetMemberBalanceLogsRequest &) = default ;
    ModelRouterGetMemberBalanceLogsRequest(ModelRouterGetMemberBalanceLogsRequest &&) = default ;
    ModelRouterGetMemberBalanceLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterGetMemberBalanceLogsRequest() = default ;
    ModelRouterGetMemberBalanceLogsRequest& operator=(const ModelRouterGetMemberBalanceLogsRequest &) = default ;
    ModelRouterGetMemberBalanceLogsRequest& operator=(ModelRouterGetMemberBalanceLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeType_ == nullptr
        && this->page_ == nullptr && this->size_ == nullptr && this->skipTotal_ == nullptr; };
    // changeType Field Functions 
    bool hasChangeType() const { return this->changeType_ != nullptr;};
    void deleteChangeType() { this->changeType_ = nullptr;};
    inline string getChangeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, "") };
    inline ModelRouterGetMemberBalanceLogsRequest& setChangeType(string changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ModelRouterGetMemberBalanceLogsRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ModelRouterGetMemberBalanceLogsRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // skipTotal Field Functions 
    bool hasSkipTotal() const { return this->skipTotal_ != nullptr;};
    void deleteSkipTotal() { this->skipTotal_ = nullptr;};
    inline bool getSkipTotal() const { DARABONBA_PTR_GET_DEFAULT(skipTotal_, false) };
    inline ModelRouterGetMemberBalanceLogsRequest& setSkipTotal(bool skipTotal) { DARABONBA_PTR_SET_VALUE(skipTotal_, skipTotal) };


  protected:
    shared_ptr<string> changeType_ {};
    shared_ptr<int32_t> page_ {};
    shared_ptr<int32_t> size_ {};
    shared_ptr<bool> skipTotal_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
