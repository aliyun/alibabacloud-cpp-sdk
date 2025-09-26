// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCREDENTIALSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTCREDENTIALSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CredentialListItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListCredentialsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCredentialsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListCredentialsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListCredentialsOutput() = default ;
    ListCredentialsOutput(const ListCredentialsOutput &) = default ;
    ListCredentialsOutput(ListCredentialsOutput &&) = default ;
    ListCredentialsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCredentialsOutput() = default ;
    ListCredentialsOutput& operator=(const ListCredentialsOutput &) = default ;
    ListCredentialsOutput& operator=(ListCredentialsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->total_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const CredentialListItem & items() const { DARABONBA_PTR_GET_CONST(items_, CredentialListItem) };
    inline CredentialListItem items() { DARABONBA_PTR_GET(items_, CredentialListItem) };
    inline ListCredentialsOutput& setItems(const CredentialListItem & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListCredentialsOutput& setItems(CredentialListItem && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline string pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, "") };
    inline ListCredentialsOutput& setPageNum(string pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListCredentialsOutput& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string total() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline ListCredentialsOutput& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<CredentialListItem> items_ = nullptr;
    std::shared_ptr<string> pageNum_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<string> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
