// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECOGNITIONLIBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECOGNITIONLIBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListRecognitionLibsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecognitionLibsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Libs, libs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecognitionLibsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Libs, libs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRecognitionLibsResponseBody() = default ;
    ListRecognitionLibsResponseBody(const ListRecognitionLibsResponseBody &) = default ;
    ListRecognitionLibsResponseBody(ListRecognitionLibsResponseBody &&) = default ;
    ListRecognitionLibsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecognitionLibsResponseBody() = default ;
    ListRecognitionLibsResponseBody& operator=(const ListRecognitionLibsResponseBody &) = default ;
    ListRecognitionLibsResponseBody& operator=(ListRecognitionLibsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Libs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Libs& obj) { 
        DARABONBA_PTR_TO_JSON(Lib, lib_);
      };
      friend void from_json(const Darabonba::Json& j, Libs& obj) { 
        DARABONBA_PTR_FROM_JSON(Lib, lib_);
      };
      Libs() = default ;
      Libs(const Libs &) = default ;
      Libs(Libs &&) = default ;
      Libs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Libs() = default ;
      Libs& operator=(const Libs &) = default ;
      Libs& operator=(Libs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Lib : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Lib& obj) { 
          DARABONBA_PTR_TO_JSON(LibDescription, libDescription_);
          DARABONBA_PTR_TO_JSON(LibId, libId_);
          DARABONBA_PTR_TO_JSON(LibName, libName_);
        };
        friend void from_json(const Darabonba::Json& j, Lib& obj) { 
          DARABONBA_PTR_FROM_JSON(LibDescription, libDescription_);
          DARABONBA_PTR_FROM_JSON(LibId, libId_);
          DARABONBA_PTR_FROM_JSON(LibName, libName_);
        };
        Lib() = default ;
        Lib(const Lib &) = default ;
        Lib(Lib &&) = default ;
        Lib(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Lib() = default ;
        Lib& operator=(const Lib &) = default ;
        Lib& operator=(Lib &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->libDescription_ == nullptr
        && this->libId_ == nullptr && this->libName_ == nullptr; };
        // libDescription Field Functions 
        bool hasLibDescription() const { return this->libDescription_ != nullptr;};
        void deleteLibDescription() { this->libDescription_ = nullptr;};
        inline string getLibDescription() const { DARABONBA_PTR_GET_DEFAULT(libDescription_, "") };
        inline Lib& setLibDescription(string libDescription) { DARABONBA_PTR_SET_VALUE(libDescription_, libDescription) };


        // libId Field Functions 
        bool hasLibId() const { return this->libId_ != nullptr;};
        void deleteLibId() { this->libId_ = nullptr;};
        inline string getLibId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
        inline Lib& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


        // libName Field Functions 
        bool hasLibName() const { return this->libName_ != nullptr;};
        void deleteLibName() { this->libName_ = nullptr;};
        inline string getLibName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
        inline Lib& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


      protected:
        // The description of the recognition library.
        shared_ptr<string> libDescription_ {};
        // The ID of the recognition library.
        shared_ptr<string> libId_ {};
        // The name of the recognition library.
        shared_ptr<string> libName_ {};
      };

      virtual bool empty() const override { return this->lib_ == nullptr; };
      // lib Field Functions 
      bool hasLib() const { return this->lib_ != nullptr;};
      void deleteLib() { this->lib_ = nullptr;};
      inline const vector<Libs::Lib> & getLib() const { DARABONBA_PTR_GET_CONST(lib_, vector<Libs::Lib>) };
      inline vector<Libs::Lib> getLib() { DARABONBA_PTR_GET(lib_, vector<Libs::Lib>) };
      inline Libs& setLib(const vector<Libs::Lib> & lib) { DARABONBA_PTR_SET_VALUE(lib_, lib) };
      inline Libs& setLib(vector<Libs::Lib> && lib) { DARABONBA_PTR_SET_RVALUE(lib_, lib) };


    protected:
      shared_ptr<vector<Libs::Lib>> lib_ {};
    };

    virtual bool empty() const override { return this->libs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // libs Field Functions 
    bool hasLibs() const { return this->libs_ != nullptr;};
    void deleteLibs() { this->libs_ = nullptr;};
    inline const ListRecognitionLibsResponseBody::Libs & getLibs() const { DARABONBA_PTR_GET_CONST(libs_, ListRecognitionLibsResponseBody::Libs) };
    inline ListRecognitionLibsResponseBody::Libs getLibs() { DARABONBA_PTR_GET(libs_, ListRecognitionLibsResponseBody::Libs) };
    inline ListRecognitionLibsResponseBody& setLibs(const ListRecognitionLibsResponseBody::Libs & libs) { DARABONBA_PTR_SET_VALUE(libs_, libs) };
    inline ListRecognitionLibsResponseBody& setLibs(ListRecognitionLibsResponseBody::Libs && libs) { DARABONBA_PTR_SET_RVALUE(libs_, libs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListRecognitionLibsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRecognitionLibsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecognitionLibsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRecognitionLibsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The recognition libraries.
    shared_ptr<ListRecognitionLibsResponseBody::Libs> libs_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
