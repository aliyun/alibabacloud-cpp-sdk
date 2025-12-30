// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCUSTOMLINESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCUSTOMLINESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class SearchCustomLinesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchCustomLinesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimestampEnd, createTimestampEnd_);
      DARABONBA_PTR_TO_JSON(CreateTimestampStart, createTimestampStart_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Ipv4, ipv4_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(UpdateTimestampEnd, updateTimestampEnd_);
      DARABONBA_PTR_TO_JSON(UpdateTimestampStart, updateTimestampStart_);
    };
    friend void from_json(const Darabonba::Json& j, SearchCustomLinesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimestampEnd, createTimestampEnd_);
      DARABONBA_PTR_FROM_JSON(CreateTimestampStart, createTimestampStart_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Ipv4, ipv4_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestampEnd, updateTimestampEnd_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestampStart, updateTimestampStart_);
    };
    SearchCustomLinesRequest() = default ;
    SearchCustomLinesRequest(const SearchCustomLinesRequest &) = default ;
    SearchCustomLinesRequest(SearchCustomLinesRequest &&) = default ;
    SearchCustomLinesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchCustomLinesRequest() = default ;
    SearchCustomLinesRequest& operator=(const SearchCustomLinesRequest &) = default ;
    SearchCustomLinesRequest& operator=(SearchCustomLinesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTimestampEnd_ == nullptr
        && this->createTimestampStart_ == nullptr && this->creator_ == nullptr && this->ipv4_ == nullptr && this->lang_ == nullptr && this->name_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->updateTimestampEnd_ == nullptr && this->updateTimestampStart_ == nullptr; };
    // createTimestampEnd Field Functions 
    bool hasCreateTimestampEnd() const { return this->createTimestampEnd_ != nullptr;};
    void deleteCreateTimestampEnd() { this->createTimestampEnd_ = nullptr;};
    inline int64_t getCreateTimestampEnd() const { DARABONBA_PTR_GET_DEFAULT(createTimestampEnd_, 0L) };
    inline SearchCustomLinesRequest& setCreateTimestampEnd(int64_t createTimestampEnd) { DARABONBA_PTR_SET_VALUE(createTimestampEnd_, createTimestampEnd) };


    // createTimestampStart Field Functions 
    bool hasCreateTimestampStart() const { return this->createTimestampStart_ != nullptr;};
    void deleteCreateTimestampStart() { this->createTimestampStart_ = nullptr;};
    inline int64_t getCreateTimestampStart() const { DARABONBA_PTR_GET_DEFAULT(createTimestampStart_, 0L) };
    inline SearchCustomLinesRequest& setCreateTimestampStart(int64_t createTimestampStart) { DARABONBA_PTR_SET_VALUE(createTimestampStart_, createTimestampStart) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline const vector<string> & getCreator() const { DARABONBA_PTR_GET_CONST(creator_, vector<string>) };
    inline vector<string> getCreator() { DARABONBA_PTR_GET(creator_, vector<string>) };
    inline SearchCustomLinesRequest& setCreator(const vector<string> & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
    inline SearchCustomLinesRequest& setCreator(vector<string> && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


    // ipv4 Field Functions 
    bool hasIpv4() const { return this->ipv4_ != nullptr;};
    void deleteIpv4() { this->ipv4_ = nullptr;};
    inline string getIpv4() const { DARABONBA_PTR_GET_DEFAULT(ipv4_, "") };
    inline SearchCustomLinesRequest& setIpv4(string ipv4) { DARABONBA_PTR_SET_VALUE(ipv4_, ipv4) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SearchCustomLinesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SearchCustomLinesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchCustomLinesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchCustomLinesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // updateTimestampEnd Field Functions 
    bool hasUpdateTimestampEnd() const { return this->updateTimestampEnd_ != nullptr;};
    void deleteUpdateTimestampEnd() { this->updateTimestampEnd_ = nullptr;};
    inline int64_t getUpdateTimestampEnd() const { DARABONBA_PTR_GET_DEFAULT(updateTimestampEnd_, 0L) };
    inline SearchCustomLinesRequest& setUpdateTimestampEnd(int64_t updateTimestampEnd) { DARABONBA_PTR_SET_VALUE(updateTimestampEnd_, updateTimestampEnd) };


    // updateTimestampStart Field Functions 
    bool hasUpdateTimestampStart() const { return this->updateTimestampStart_ != nullptr;};
    void deleteUpdateTimestampStart() { this->updateTimestampStart_ = nullptr;};
    inline int64_t getUpdateTimestampStart() const { DARABONBA_PTR_GET_DEFAULT(updateTimestampStart_, 0L) };
    inline SearchCustomLinesRequest& setUpdateTimestampStart(int64_t updateTimestampStart) { DARABONBA_PTR_SET_VALUE(updateTimestampStart_, updateTimestampStart) };


  protected:
    // The end of the time range during which the custom lines are created to query. Set the time to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> createTimestampEnd_ {};
    // The beginning of the time range during which the custom lines are created to query. Set the time to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> createTimestampStart_ {};
    // The IDs of the creators for the custom lines.
    shared_ptr<vector<string>> creator_ {};
    // The IPv4 address.
    shared_ptr<string> ipv4_ {};
    // The language.
    shared_ptr<string> lang_ {};
    // The name of the custom line.
    shared_ptr<string> name_ {};
    // The page number. Pages start from page **1**. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: **1 to 100**. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The end of the time range during which the custom lines are updated to query. Set the time to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> updateTimestampEnd_ {};
    // The beginning of the time range during which the custom lines are updated to query. Set the time to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> updateTimestampStart_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
