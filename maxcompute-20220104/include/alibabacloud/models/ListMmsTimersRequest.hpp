// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSTIMERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSTIMERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsTimersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsTimersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(srcDbName, srcDbName_);
      DARABONBA_PTR_TO_JSON(srcTableName, srcTableName_);
      DARABONBA_PTR_TO_JSON(stopped, stopped_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsTimersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(srcDbName, srcDbName_);
      DARABONBA_PTR_FROM_JSON(srcTableName, srcTableName_);
      DARABONBA_PTR_FROM_JSON(stopped, stopped_);
    };
    ListMmsTimersRequest() = default ;
    ListMmsTimersRequest(const ListMmsTimersRequest &) = default ;
    ListMmsTimersRequest(ListMmsTimersRequest &&) = default ;
    ListMmsTimersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsTimersRequest() = default ;
    ListMmsTimersRequest& operator=(const ListMmsTimersRequest &) = default ;
    ListMmsTimersRequest& operator=(ListMmsTimersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->srcDbName_ == nullptr && this->srcTableName_ == nullptr && this->stopped_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMmsTimersRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListMmsTimersRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMmsTimersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // srcDbName Field Functions 
    bool hasSrcDbName() const { return this->srcDbName_ != nullptr;};
    void deleteSrcDbName() { this->srcDbName_ = nullptr;};
    inline string getSrcDbName() const { DARABONBA_PTR_GET_DEFAULT(srcDbName_, "") };
    inline ListMmsTimersRequest& setSrcDbName(string srcDbName) { DARABONBA_PTR_SET_VALUE(srcDbName_, srcDbName) };


    // srcTableName Field Functions 
    bool hasSrcTableName() const { return this->srcTableName_ != nullptr;};
    void deleteSrcTableName() { this->srcTableName_ = nullptr;};
    inline string getSrcTableName() const { DARABONBA_PTR_GET_DEFAULT(srcTableName_, "") };
    inline ListMmsTimersRequest& setSrcTableName(string srcTableName) { DARABONBA_PTR_SET_VALUE(srcTableName_, srcTableName) };


    // stopped Field Functions 
    bool hasStopped() const { return this->stopped_ != nullptr;};
    void deleteStopped() { this->stopped_ = nullptr;};
    inline bool getStopped() const { DARABONBA_PTR_GET_DEFAULT(stopped_, false) };
    inline ListMmsTimersRequest& setStopped(bool stopped) { DARABONBA_PTR_SET_VALUE(stopped_, stopped) };


  protected:
    shared_ptr<string> name_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> srcDbName_ {};
    shared_ptr<string> srcTableName_ {};
    shared_ptr<bool> stopped_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
