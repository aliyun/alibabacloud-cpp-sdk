// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATEPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATEPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListTemplatePageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplatePageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplatePageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    ListTemplatePageResponseBody() = default ;
    ListTemplatePageResponseBody(const ListTemplatePageResponseBody &) = default ;
    ListTemplatePageResponseBody(ListTemplatePageResponseBody &&) = default ;
    ListTemplatePageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplatePageResponseBody() = default ;
    ListTemplatePageResponseBody& operator=(const ListTemplatePageResponseBody &) = default ;
    ListTemplatePageResponseBody& operator=(ListTemplatePageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(DescInfo, descInfo_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(IconUrls, iconUrls_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ImageUrls, imageUrls_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PushStyle, pushStyle_);
        DARABONBA_PTR_TO_JSON(ShowStyle, showStyle_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Uri, uri_);
        DARABONBA_PTR_TO_JSON(Variables, variables_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(DescInfo, descInfo_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(IconUrls, iconUrls_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ImageUrls, imageUrls_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PushStyle, pushStyle_);
        DARABONBA_PTR_FROM_JSON(ShowStyle, showStyle_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Uri, uri_);
        DARABONBA_PTR_FROM_JSON(Variables, variables_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->content_ == nullptr && this->descInfo_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->iconUrls_ == nullptr
        && this->id_ == nullptr && this->imageUrls_ == nullptr && this->name_ == nullptr && this->pushStyle_ == nullptr && this->showStyle_ == nullptr
        && this->title_ == nullptr && this->uri_ == nullptr && this->variables_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline Data& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Data& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // descInfo Field Functions 
      bool hasDescInfo() const { return this->descInfo_ != nullptr;};
      void deleteDescInfo() { this->descInfo_ = nullptr;};
      inline string getDescInfo() const { DARABONBA_PTR_GET_DEFAULT(descInfo_, "") };
      inline Data& setDescInfo(string descInfo) { DARABONBA_PTR_SET_VALUE(descInfo_, descInfo) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // iconUrls Field Functions 
      bool hasIconUrls() const { return this->iconUrls_ != nullptr;};
      void deleteIconUrls() { this->iconUrls_ = nullptr;};
      inline string getIconUrls() const { DARABONBA_PTR_GET_DEFAULT(iconUrls_, "") };
      inline Data& setIconUrls(string iconUrls) { DARABONBA_PTR_SET_VALUE(iconUrls_, iconUrls) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // imageUrls Field Functions 
      bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
      void deleteImageUrls() { this->imageUrls_ = nullptr;};
      inline string getImageUrls() const { DARABONBA_PTR_GET_DEFAULT(imageUrls_, "") };
      inline Data& setImageUrls(string imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // pushStyle Field Functions 
      bool hasPushStyle() const { return this->pushStyle_ != nullptr;};
      void deletePushStyle() { this->pushStyle_ = nullptr;};
      inline string getPushStyle() const { DARABONBA_PTR_GET_DEFAULT(pushStyle_, "") };
      inline Data& setPushStyle(string pushStyle) { DARABONBA_PTR_SET_VALUE(pushStyle_, pushStyle) };


      // showStyle Field Functions 
      bool hasShowStyle() const { return this->showStyle_ != nullptr;};
      void deleteShowStyle() { this->showStyle_ = nullptr;};
      inline string getShowStyle() const { DARABONBA_PTR_GET_DEFAULT(showStyle_, "") };
      inline Data& setShowStyle(string showStyle) { DARABONBA_PTR_SET_VALUE(showStyle_, showStyle) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // uri Field Functions 
      bool hasUri() const { return this->uri_ != nullptr;};
      void deleteUri() { this->uri_ = nullptr;};
      inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
      inline Data& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


      // variables Field Functions 
      bool hasVariables() const { return this->variables_ != nullptr;};
      void deleteVariables() { this->variables_ = nullptr;};
      inline string getVariables() const { DARABONBA_PTR_GET_DEFAULT(variables_, "") };
      inline Data& setVariables(string variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };


    protected:
      shared_ptr<string> action_ {};
      shared_ptr<string> content_ {};
      shared_ptr<string> descInfo_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> iconUrls_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> imageUrls_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> pushStyle_ {};
      shared_ptr<string> showStyle_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> uri_ {};
      shared_ptr<string> variables_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->currentPage_ == nullptr && this->data_ == nullptr && this->msg_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalSize_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTemplatePageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListTemplatePageResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListTemplatePageResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListTemplatePageResponseBody::Data>) };
    inline vector<ListTemplatePageResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListTemplatePageResponseBody::Data>) };
    inline ListTemplatePageResponseBody& setData(const vector<ListTemplatePageResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTemplatePageResponseBody& setData(vector<ListTemplatePageResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline ListTemplatePageResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTemplatePageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTemplatePageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTemplatePageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline ListTemplatePageResponseBody& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<ListTemplatePageResponseBody::Data>> data_ {};
    shared_ptr<string> msg_ {};
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
