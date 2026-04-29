// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDLISTEXTENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDLISTEXTENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudListExtenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudListExtenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudListExtenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudListExtenResponseBody() = default ;
    CloudListExtenResponseBody(const CloudListExtenResponseBody &) = default ;
    CloudListExtenResponseBody(CloudListExtenResponseBody &&) = default ;
    CloudListExtenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudListExtenResponseBody() = default ;
    CloudListExtenResponseBody& operator=(const CloudListExtenResponseBody &) = default ;
    CloudListExtenResponseBody& operator=(CloudListExtenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EndRow, endRow_);
        DARABONBA_PTR_TO_JSON(FirstPage, firstPage_);
        DARABONBA_PTR_TO_JSON(HasNextPage, hasNextPage_);
        DARABONBA_PTR_TO_JSON(HasPreviousPage, hasPreviousPage_);
        DARABONBA_PTR_TO_JSON(IsFirstPage, isFirstPage_);
        DARABONBA_PTR_TO_JSON(IsLastPage, isLastPage_);
        DARABONBA_PTR_TO_JSON(LastPage, lastPage_);
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(NavigatePages, navigatePages_);
        DARABONBA_PTR_TO_JSON(NavigatepageNums, navigatepageNums_);
        DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
        DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Pages, pages_);
        DARABONBA_PTR_TO_JSON(PrePage, prePage_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(StartRow, startRow_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EndRow, endRow_);
        DARABONBA_PTR_FROM_JSON(FirstPage, firstPage_);
        DARABONBA_PTR_FROM_JSON(HasNextPage, hasNextPage_);
        DARABONBA_PTR_FROM_JSON(HasPreviousPage, hasPreviousPage_);
        DARABONBA_PTR_FROM_JSON(IsFirstPage, isFirstPage_);
        DARABONBA_PTR_FROM_JSON(IsLastPage, isLastPage_);
        DARABONBA_PTR_FROM_JSON(LastPage, lastPage_);
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(NavigatePages, navigatePages_);
        DARABONBA_PTR_FROM_JSON(NavigatepageNums, navigatepageNums_);
        DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
        DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Pages, pages_);
        DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(StartRow, startRow_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(Allow, allow_);
          DARABONBA_PTR_TO_JSON(AreaCode, areaCode_);
          DARABONBA_PTR_TO_JSON(CallPower, callPower_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Denoise, denoise_);
          DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_TO_JSON(Exten, exten_);
          DARABONBA_PTR_TO_JSON(IbRecord, ibRecord_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsDirect, isDirect_);
          DARABONBA_PTR_TO_JSON(IsOb, isOb_);
          DARABONBA_PTR_TO_JSON(JitterBuffer, jitterBuffer_);
          DARABONBA_PTR_TO_JSON(ObRecord, obRecord_);
          DARABONBA_PTR_TO_JSON(Password, password_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(Allow, allow_);
          DARABONBA_PTR_FROM_JSON(AreaCode, areaCode_);
          DARABONBA_PTR_FROM_JSON(CallPower, callPower_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Denoise, denoise_);
          DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_FROM_JSON(Exten, exten_);
          DARABONBA_PTR_FROM_JSON(IbRecord, ibRecord_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsDirect, isDirect_);
          DARABONBA_PTR_FROM_JSON(IsOb, isOb_);
          DARABONBA_PTR_FROM_JSON(JitterBuffer, jitterBuffer_);
          DARABONBA_PTR_FROM_JSON(ObRecord, obRecord_);
          DARABONBA_PTR_FROM_JSON(Password, password_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allow_ == nullptr
        && this->areaCode_ == nullptr && this->callPower_ == nullptr && this->createTime_ == nullptr && this->denoise_ == nullptr && this->enterpriseId_ == nullptr
        && this->exten_ == nullptr && this->ibRecord_ == nullptr && this->id_ == nullptr && this->isDirect_ == nullptr && this->isOb_ == nullptr
        && this->jitterBuffer_ == nullptr && this->obRecord_ == nullptr && this->password_ == nullptr && this->type_ == nullptr; };
        // allow Field Functions 
        bool hasAllow() const { return this->allow_ != nullptr;};
        void deleteAllow() { this->allow_ = nullptr;};
        inline string getAllow() const { DARABONBA_PTR_GET_DEFAULT(allow_, "") };
        inline List& setAllow(string allow) { DARABONBA_PTR_SET_VALUE(allow_, allow) };


        // areaCode Field Functions 
        bool hasAreaCode() const { return this->areaCode_ != nullptr;};
        void deleteAreaCode() { this->areaCode_ = nullptr;};
        inline string getAreaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
        inline List& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


        // callPower Field Functions 
        bool hasCallPower() const { return this->callPower_ != nullptr;};
        void deleteCallPower() { this->callPower_ = nullptr;};
        inline string getCallPower() const { DARABONBA_PTR_GET_DEFAULT(callPower_, "") };
        inline List& setCallPower(string callPower) { DARABONBA_PTR_SET_VALUE(callPower_, callPower) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline List& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // denoise Field Functions 
        bool hasDenoise() const { return this->denoise_ != nullptr;};
        void deleteDenoise() { this->denoise_ = nullptr;};
        inline int64_t getDenoise() const { DARABONBA_PTR_GET_DEFAULT(denoise_, 0L) };
        inline List& setDenoise(int64_t denoise) { DARABONBA_PTR_SET_VALUE(denoise_, denoise) };


        // enterpriseId Field Functions 
        bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
        void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
        inline string getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, "") };
        inline List& setEnterpriseId(string enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


        // exten Field Functions 
        bool hasExten() const { return this->exten_ != nullptr;};
        void deleteExten() { this->exten_ = nullptr;};
        inline string getExten() const { DARABONBA_PTR_GET_DEFAULT(exten_, "") };
        inline List& setExten(string exten) { DARABONBA_PTR_SET_VALUE(exten_, exten) };


        // ibRecord Field Functions 
        bool hasIbRecord() const { return this->ibRecord_ != nullptr;};
        void deleteIbRecord() { this->ibRecord_ = nullptr;};
        inline int64_t getIbRecord() const { DARABONBA_PTR_GET_DEFAULT(ibRecord_, 0L) };
        inline List& setIbRecord(int64_t ibRecord) { DARABONBA_PTR_SET_VALUE(ibRecord_, ibRecord) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline List& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isDirect Field Functions 
        bool hasIsDirect() const { return this->isDirect_ != nullptr;};
        void deleteIsDirect() { this->isDirect_ = nullptr;};
        inline int64_t getIsDirect() const { DARABONBA_PTR_GET_DEFAULT(isDirect_, 0L) };
        inline List& setIsDirect(int64_t isDirect) { DARABONBA_PTR_SET_VALUE(isDirect_, isDirect) };


        // isOb Field Functions 
        bool hasIsOb() const { return this->isOb_ != nullptr;};
        void deleteIsOb() { this->isOb_ = nullptr;};
        inline int64_t getIsOb() const { DARABONBA_PTR_GET_DEFAULT(isOb_, 0L) };
        inline List& setIsOb(int64_t isOb) { DARABONBA_PTR_SET_VALUE(isOb_, isOb) };


        // jitterBuffer Field Functions 
        bool hasJitterBuffer() const { return this->jitterBuffer_ != nullptr;};
        void deleteJitterBuffer() { this->jitterBuffer_ = nullptr;};
        inline int64_t getJitterBuffer() const { DARABONBA_PTR_GET_DEFAULT(jitterBuffer_, 0L) };
        inline List& setJitterBuffer(int64_t jitterBuffer) { DARABONBA_PTR_SET_VALUE(jitterBuffer_, jitterBuffer) };


        // obRecord Field Functions 
        bool hasObRecord() const { return this->obRecord_ != nullptr;};
        void deleteObRecord() { this->obRecord_ = nullptr;};
        inline int64_t getObRecord() const { DARABONBA_PTR_GET_DEFAULT(obRecord_, 0L) };
        inline List& setObRecord(int64_t obRecord) { DARABONBA_PTR_SET_VALUE(obRecord_, obRecord) };


        // password Field Functions 
        bool hasPassword() const { return this->password_ != nullptr;};
        void deletePassword() { this->password_ = nullptr;};
        inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
        inline List& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
        inline List& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // 允许的语音编码,支持格式: 1. g729 2. g729,alaw,ulaw 3. alaw,ulaw,g729 4. alaw,ulaw 5. myopus,alaw,ulaw 公网+远程话机支持配置1/2/3;专线+远程话机支持配置1/2;公网+软电话支持配置4;专线+软电话支持配置5;
        shared_ptr<string> allow_ {};
        // 区号
        shared_ptr<string> areaCode_ {};
        // 呼叫权限，0：无限制，1：国内长途，2：国内本市，3：内部呼叫，默认无限制
        shared_ptr<string> callPower_ {};
        // 创建时间
        shared_ptr<string> createTime_ {};
        // 降噪开关 0:关闭 1:开启 默认关闭(该参数只有在类型为注册到webrtc才有效)
        shared_ptr<int64_t> denoise_ {};
        // 企业编号
        shared_ptr<string> enterpriseId_ {};
        // 分机号,3-11位
        shared_ptr<string> exten_ {};
        // 呼入是否录音，0：不录用，1：录音，默认录音
        shared_ptr<int64_t> ibRecord_ {};
        // 分机号id
        shared_ptr<int64_t> id_ {};
        // 是否允许摘机外呼，0：不允许，1：可以，默认允许
        shared_ptr<int64_t> isDirect_ {};
        // 是否允许外呼，0：不允许，1：可以，默认允许
        shared_ptr<int64_t> isOb_ {};
        // 网络防抖
        shared_ptr<int64_t> jitterBuffer_ {};
        // 外呼是否录音，0：不录音，1：录音，默认录音
        shared_ptr<int64_t> obRecord_ {};
        // 密码
        shared_ptr<string> password_ {};
        // 类型，1. 注册到IAD分机 2.注册到webrtc 3.注册到远程话机
        shared_ptr<int64_t> type_ {};
      };

      virtual bool empty() const override { return this->endRow_ == nullptr
        && this->firstPage_ == nullptr && this->hasNextPage_ == nullptr && this->hasPreviousPage_ == nullptr && this->isFirstPage_ == nullptr && this->isLastPage_ == nullptr
        && this->lastPage_ == nullptr && this->list_ == nullptr && this->navigatePages_ == nullptr && this->navigatepageNums_ == nullptr && this->nextPage_ == nullptr
        && this->orderBy_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->pages_ == nullptr && this->prePage_ == nullptr
        && this->size_ == nullptr && this->startRow_ == nullptr && this->total_ == nullptr; };
      // endRow Field Functions 
      bool hasEndRow() const { return this->endRow_ != nullptr;};
      void deleteEndRow() { this->endRow_ = nullptr;};
      inline string getEndRow() const { DARABONBA_PTR_GET_DEFAULT(endRow_, "") };
      inline Data& setEndRow(string endRow) { DARABONBA_PTR_SET_VALUE(endRow_, endRow) };


      // firstPage Field Functions 
      bool hasFirstPage() const { return this->firstPage_ != nullptr;};
      void deleteFirstPage() { this->firstPage_ = nullptr;};
      inline string getFirstPage() const { DARABONBA_PTR_GET_DEFAULT(firstPage_, "") };
      inline Data& setFirstPage(string firstPage) { DARABONBA_PTR_SET_VALUE(firstPage_, firstPage) };


      // hasNextPage Field Functions 
      bool hasHasNextPage() const { return this->hasNextPage_ != nullptr;};
      void deleteHasNextPage() { this->hasNextPage_ = nullptr;};
      inline int64_t getHasNextPage() const { DARABONBA_PTR_GET_DEFAULT(hasNextPage_, 0L) };
      inline Data& setHasNextPage(int64_t hasNextPage) { DARABONBA_PTR_SET_VALUE(hasNextPage_, hasNextPage) };


      // hasPreviousPage Field Functions 
      bool hasHasPreviousPage() const { return this->hasPreviousPage_ != nullptr;};
      void deleteHasPreviousPage() { this->hasPreviousPage_ = nullptr;};
      inline int64_t getHasPreviousPage() const { DARABONBA_PTR_GET_DEFAULT(hasPreviousPage_, 0L) };
      inline Data& setHasPreviousPage(int64_t hasPreviousPage) { DARABONBA_PTR_SET_VALUE(hasPreviousPage_, hasPreviousPage) };


      // isFirstPage Field Functions 
      bool hasIsFirstPage() const { return this->isFirstPage_ != nullptr;};
      void deleteIsFirstPage() { this->isFirstPage_ = nullptr;};
      inline int64_t getIsFirstPage() const { DARABONBA_PTR_GET_DEFAULT(isFirstPage_, 0L) };
      inline Data& setIsFirstPage(int64_t isFirstPage) { DARABONBA_PTR_SET_VALUE(isFirstPage_, isFirstPage) };


      // isLastPage Field Functions 
      bool hasIsLastPage() const { return this->isLastPage_ != nullptr;};
      void deleteIsLastPage() { this->isLastPage_ = nullptr;};
      inline int64_t getIsLastPage() const { DARABONBA_PTR_GET_DEFAULT(isLastPage_, 0L) };
      inline Data& setIsLastPage(int64_t isLastPage) { DARABONBA_PTR_SET_VALUE(isLastPage_, isLastPage) };


      // lastPage Field Functions 
      bool hasLastPage() const { return this->lastPage_ != nullptr;};
      void deleteLastPage() { this->lastPage_ = nullptr;};
      inline string getLastPage() const { DARABONBA_PTR_GET_DEFAULT(lastPage_, "") };
      inline Data& setLastPage(string lastPage) { DARABONBA_PTR_SET_VALUE(lastPage_, lastPage) };


      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // navigatePages Field Functions 
      bool hasNavigatePages() const { return this->navigatePages_ != nullptr;};
      void deleteNavigatePages() { this->navigatePages_ = nullptr;};
      inline string getNavigatePages() const { DARABONBA_PTR_GET_DEFAULT(navigatePages_, "") };
      inline Data& setNavigatePages(string navigatePages) { DARABONBA_PTR_SET_VALUE(navigatePages_, navigatePages) };


      // navigatepageNums Field Functions 
      bool hasNavigatepageNums() const { return this->navigatepageNums_ != nullptr;};
      void deleteNavigatepageNums() { this->navigatepageNums_ = nullptr;};
      inline const vector<string> & getNavigatepageNums() const { DARABONBA_PTR_GET_CONST(navigatepageNums_, vector<string>) };
      inline vector<string> getNavigatepageNums() { DARABONBA_PTR_GET(navigatepageNums_, vector<string>) };
      inline Data& setNavigatepageNums(const vector<string> & navigatepageNums) { DARABONBA_PTR_SET_VALUE(navigatepageNums_, navigatepageNums) };
      inline Data& setNavigatepageNums(vector<string> && navigatepageNums) { DARABONBA_PTR_SET_RVALUE(navigatepageNums_, navigatepageNums) };


      // nextPage Field Functions 
      bool hasNextPage() const { return this->nextPage_ != nullptr;};
      void deleteNextPage() { this->nextPage_ = nullptr;};
      inline string getNextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, "") };
      inline Data& setNextPage(string nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


      // orderBy Field Functions 
      bool hasOrderBy() const { return this->orderBy_ != nullptr;};
      void deleteOrderBy() { this->orderBy_ = nullptr;};
      inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
      inline Data& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline string getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, "") };
      inline Data& setPageNum(string pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
      inline Data& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // pages Field Functions 
      bool hasPages() const { return this->pages_ != nullptr;};
      void deletePages() { this->pages_ = nullptr;};
      inline string getPages() const { DARABONBA_PTR_GET_DEFAULT(pages_, "") };
      inline Data& setPages(string pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };


      // prePage Field Functions 
      bool hasPrePage() const { return this->prePage_ != nullptr;};
      void deletePrePage() { this->prePage_ = nullptr;};
      inline string getPrePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, "") };
      inline Data& setPrePage(string prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
      inline Data& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // startRow Field Functions 
      bool hasStartRow() const { return this->startRow_ != nullptr;};
      void deleteStartRow() { this->startRow_ = nullptr;};
      inline string getStartRow() const { DARABONBA_PTR_GET_DEFAULT(startRow_, "") };
      inline Data& setStartRow(string startRow) { DARABONBA_PTR_SET_VALUE(startRow_, startRow) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline string getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
      inline Data& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<string> endRow_ {};
      shared_ptr<string> firstPage_ {};
      shared_ptr<int64_t> hasNextPage_ {};
      shared_ptr<int64_t> hasPreviousPage_ {};
      shared_ptr<int64_t> isFirstPage_ {};
      shared_ptr<int64_t> isLastPage_ {};
      shared_ptr<string> lastPage_ {};
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<string> navigatePages_ {};
      shared_ptr<vector<string>> navigatepageNums_ {};
      shared_ptr<string> nextPage_ {};
      shared_ptr<string> orderBy_ {};
      shared_ptr<string> pageNum_ {};
      shared_ptr<string> pageSize_ {};
      shared_ptr<string> pages_ {};
      shared_ptr<string> prePage_ {};
      shared_ptr<string> size_ {};
      shared_ptr<string> startRow_ {};
      shared_ptr<string> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudListExtenResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudListExtenResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudListExtenResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudListExtenResponseBody::Data) };
    inline CloudListExtenResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudListExtenResponseBody::Data) };
    inline CloudListExtenResponseBody& setData(const CloudListExtenResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudListExtenResponseBody& setData(CloudListExtenResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudListExtenResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudListExtenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudListExtenResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
