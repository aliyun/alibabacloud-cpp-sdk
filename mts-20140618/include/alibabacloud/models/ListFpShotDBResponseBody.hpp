// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFPSHOTDBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFPSHOTDBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListFpShotDBResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFpShotDBResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FpShotDBList, fpShotDBList_);
      DARABONBA_PTR_TO_JSON(NonExistIds, nonExistIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFpShotDBResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FpShotDBList, fpShotDBList_);
      DARABONBA_PTR_FROM_JSON(NonExistIds, nonExistIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFpShotDBResponseBody() = default ;
    ListFpShotDBResponseBody(const ListFpShotDBResponseBody &) = default ;
    ListFpShotDBResponseBody(ListFpShotDBResponseBody &&) = default ;
    ListFpShotDBResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFpShotDBResponseBody() = default ;
    ListFpShotDBResponseBody& operator=(const ListFpShotDBResponseBody &) = default ;
    ListFpShotDBResponseBody& operator=(ListFpShotDBResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NonExistIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NonExistIds& obj) { 
        DARABONBA_PTR_TO_JSON(String, string_);
      };
      friend void from_json(const Darabonba::Json& j, NonExistIds& obj) { 
        DARABONBA_PTR_FROM_JSON(String, string_);
      };
      NonExistIds() = default ;
      NonExistIds(const NonExistIds &) = default ;
      NonExistIds(NonExistIds &&) = default ;
      NonExistIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NonExistIds() = default ;
      NonExistIds& operator=(const NonExistIds &) = default ;
      NonExistIds& operator=(NonExistIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->string_ == nullptr; };
      // string Field Functions 
      bool hasString() const { return this->string_ != nullptr;};
      void deleteString() { this->string_ = nullptr;};
      inline const vector<string> & getString() const { DARABONBA_PTR_GET_CONST(string_, vector<string>) };
      inline vector<string> getString() { DARABONBA_PTR_GET(string_, vector<string>) };
      inline NonExistIds& setString(const vector<string> & string) { DARABONBA_PTR_SET_VALUE(string_, string) };
      inline NonExistIds& setString(vector<string> && string) { DARABONBA_PTR_SET_RVALUE(string_, string) };


    protected:
      shared_ptr<vector<string>> string_ {};
    };

    class FpShotDBList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FpShotDBList& obj) { 
        DARABONBA_PTR_TO_JSON(FpShotDB, fpShotDB_);
      };
      friend void from_json(const Darabonba::Json& j, FpShotDBList& obj) { 
        DARABONBA_PTR_FROM_JSON(FpShotDB, fpShotDB_);
      };
      FpShotDBList() = default ;
      FpShotDBList(const FpShotDBList &) = default ;
      FpShotDBList(FpShotDBList &&) = default ;
      FpShotDBList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FpShotDBList() = default ;
      FpShotDBList& operator=(const FpShotDBList &) = default ;
      FpShotDBList& operator=(FpShotDBList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FpShotDB : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FpShotDB& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(FpDBId, fpDBId_);
          DARABONBA_PTR_TO_JSON(ModelId, modelId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, FpShotDB& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(FpDBId, fpDBId_);
          DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        FpShotDB() = default ;
        FpShotDB(const FpShotDB &) = default ;
        FpShotDB(FpShotDB &&) = default ;
        FpShotDB(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FpShotDB() = default ;
        FpShotDB& operator=(const FpShotDB &) = default ;
        FpShotDB& operator=(FpShotDB &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->fpDBId_ == nullptr && this->modelId_ == nullptr && this->name_ == nullptr && this->status_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline FpShotDB& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // fpDBId Field Functions 
        bool hasFpDBId() const { return this->fpDBId_ != nullptr;};
        void deleteFpDBId() { this->fpDBId_ = nullptr;};
        inline string getFpDBId() const { DARABONBA_PTR_GET_DEFAULT(fpDBId_, "") };
        inline FpShotDB& setFpDBId(string fpDBId) { DARABONBA_PTR_SET_VALUE(fpDBId_, fpDBId) };


        // modelId Field Functions 
        bool hasModelId() const { return this->modelId_ != nullptr;};
        void deleteModelId() { this->modelId_ = nullptr;};
        inline int32_t getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0) };
        inline FpShotDB& setModelId(int32_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline FpShotDB& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline FpShotDB& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> fpDBId_ {};
        shared_ptr<int32_t> modelId_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->fpShotDB_ == nullptr; };
      // fpShotDB Field Functions 
      bool hasFpShotDB() const { return this->fpShotDB_ != nullptr;};
      void deleteFpShotDB() { this->fpShotDB_ = nullptr;};
      inline const vector<FpShotDBList::FpShotDB> & getFpShotDB() const { DARABONBA_PTR_GET_CONST(fpShotDB_, vector<FpShotDBList::FpShotDB>) };
      inline vector<FpShotDBList::FpShotDB> getFpShotDB() { DARABONBA_PTR_GET(fpShotDB_, vector<FpShotDBList::FpShotDB>) };
      inline FpShotDBList& setFpShotDB(const vector<FpShotDBList::FpShotDB> & fpShotDB) { DARABONBA_PTR_SET_VALUE(fpShotDB_, fpShotDB) };
      inline FpShotDBList& setFpShotDB(vector<FpShotDBList::FpShotDB> && fpShotDB) { DARABONBA_PTR_SET_RVALUE(fpShotDB_, fpShotDB) };


    protected:
      shared_ptr<vector<FpShotDBList::FpShotDB>> fpShotDB_ {};
    };

    virtual bool empty() const override { return this->fpShotDBList_ == nullptr
        && this->nonExistIds_ == nullptr && this->requestId_ == nullptr; };
    // fpShotDBList Field Functions 
    bool hasFpShotDBList() const { return this->fpShotDBList_ != nullptr;};
    void deleteFpShotDBList() { this->fpShotDBList_ = nullptr;};
    inline const ListFpShotDBResponseBody::FpShotDBList & getFpShotDBList() const { DARABONBA_PTR_GET_CONST(fpShotDBList_, ListFpShotDBResponseBody::FpShotDBList) };
    inline ListFpShotDBResponseBody::FpShotDBList getFpShotDBList() { DARABONBA_PTR_GET(fpShotDBList_, ListFpShotDBResponseBody::FpShotDBList) };
    inline ListFpShotDBResponseBody& setFpShotDBList(const ListFpShotDBResponseBody::FpShotDBList & fpShotDBList) { DARABONBA_PTR_SET_VALUE(fpShotDBList_, fpShotDBList) };
    inline ListFpShotDBResponseBody& setFpShotDBList(ListFpShotDBResponseBody::FpShotDBList && fpShotDBList) { DARABONBA_PTR_SET_RVALUE(fpShotDBList_, fpShotDBList) };


    // nonExistIds Field Functions 
    bool hasNonExistIds() const { return this->nonExistIds_ != nullptr;};
    void deleteNonExistIds() { this->nonExistIds_ = nullptr;};
    inline const ListFpShotDBResponseBody::NonExistIds & getNonExistIds() const { DARABONBA_PTR_GET_CONST(nonExistIds_, ListFpShotDBResponseBody::NonExistIds) };
    inline ListFpShotDBResponseBody::NonExistIds getNonExistIds() { DARABONBA_PTR_GET(nonExistIds_, ListFpShotDBResponseBody::NonExistIds) };
    inline ListFpShotDBResponseBody& setNonExistIds(const ListFpShotDBResponseBody::NonExistIds & nonExistIds) { DARABONBA_PTR_SET_VALUE(nonExistIds_, nonExistIds) };
    inline ListFpShotDBResponseBody& setNonExistIds(ListFpShotDBResponseBody::NonExistIds && nonExistIds) { DARABONBA_PTR_SET_RVALUE(nonExistIds_, nonExistIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFpShotDBResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListFpShotDBResponseBody::FpShotDBList> fpShotDBList_ {};
    shared_ptr<ListFpShotDBResponseBody::NonExistIds> nonExistIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
