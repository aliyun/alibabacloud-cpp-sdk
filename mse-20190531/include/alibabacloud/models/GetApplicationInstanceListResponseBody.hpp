// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONINSTANCELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONINSTANCELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetApplicationInstanceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationInstanceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationInstanceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    GetApplicationInstanceListResponseBody() = default ;
    GetApplicationInstanceListResponseBody(const GetApplicationInstanceListResponseBody &) = default ;
    GetApplicationInstanceListResponseBody(GetApplicationInstanceListResponseBody &&) = default ;
    GetApplicationInstanceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationInstanceListResponseBody() = default ;
    GetApplicationInstanceListResponseBody& operator=(const GetApplicationInstanceListResponseBody &) = default ;
    GetApplicationInstanceListResponseBody& operator=(GetApplicationInstanceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
          inline Tags& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        protected:
          // 标签值。
          shared_ptr<string> tag_ {};
        };

        virtual bool empty() const override { return this->ip_ == nullptr
        && this->port_ == nullptr && this->tags_ == nullptr; };
        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline Result& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline Result& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<Result::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Result::Tags>) };
        inline vector<Result::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Result::Tags>) };
        inline Result& setTags(const vector<Result::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Result& setTags(vector<Result::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // The node IP address.
        shared_ptr<string> ip_ {};
        // The application port.
        shared_ptr<string> port_ {};
        // The node tags.
        shared_ptr<vector<Result::Tags>> tags_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->result_ == nullptr && this->totalSize_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The page number. Pages start from page 1.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The queried nodes.
      shared_ptr<vector<Data::Result>> result_ {};
      // The total number of nodes.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetApplicationInstanceListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetApplicationInstanceListResponseBody::Data) };
    inline GetApplicationInstanceListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetApplicationInstanceListResponseBody::Data) };
    inline GetApplicationInstanceListResponseBody& setData(const GetApplicationInstanceListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetApplicationInstanceListResponseBody& setData(GetApplicationInstanceListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // The returned data.
    shared_ptr<GetApplicationInstanceListResponseBody::Data> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
