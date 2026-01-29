// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOSTUNITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECOSTUNITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class CreateCostUnitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCostUnitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCostUnitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateCostUnitResponseBody() = default ;
    CreateCostUnitResponseBody(const CreateCostUnitResponseBody &) = default ;
    CreateCostUnitResponseBody(CreateCostUnitResponseBody &&) = default ;
    CreateCostUnitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCostUnitResponseBody() = default ;
    CreateCostUnitResponseBody& operator=(const CreateCostUnitResponseBody &) = default ;
    CreateCostUnitResponseBody& operator=(CreateCostUnitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CostUnitDtoList, costUnitDtoList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CostUnitDtoList, costUnitDtoList_);
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
      class CostUnitDtoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CostUnitDtoList& obj) { 
          DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
          DARABONBA_PTR_TO_JSON(ParentUnitId, parentUnitId_);
          DARABONBA_PTR_TO_JSON(UnitId, unitId_);
          DARABONBA_PTR_TO_JSON(UnitName, unitName_);
        };
        friend void from_json(const Darabonba::Json& j, CostUnitDtoList& obj) { 
          DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
          DARABONBA_PTR_FROM_JSON(ParentUnitId, parentUnitId_);
          DARABONBA_PTR_FROM_JSON(UnitId, unitId_);
          DARABONBA_PTR_FROM_JSON(UnitName, unitName_);
        };
        CostUnitDtoList() = default ;
        CostUnitDtoList(const CostUnitDtoList &) = default ;
        CostUnitDtoList(CostUnitDtoList &&) = default ;
        CostUnitDtoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CostUnitDtoList() = default ;
        CostUnitDtoList& operator=(const CostUnitDtoList &) = default ;
        CostUnitDtoList& operator=(CostUnitDtoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ownerUid_ == nullptr
        && this->parentUnitId_ == nullptr && this->unitId_ == nullptr && this->unitName_ == nullptr; };
        // ownerUid Field Functions 
        bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
        void deleteOwnerUid() { this->ownerUid_ = nullptr;};
        inline int64_t getOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, 0L) };
        inline CostUnitDtoList& setOwnerUid(int64_t ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


        // parentUnitId Field Functions 
        bool hasParentUnitId() const { return this->parentUnitId_ != nullptr;};
        void deleteParentUnitId() { this->parentUnitId_ = nullptr;};
        inline int64_t getParentUnitId() const { DARABONBA_PTR_GET_DEFAULT(parentUnitId_, 0L) };
        inline CostUnitDtoList& setParentUnitId(int64_t parentUnitId) { DARABONBA_PTR_SET_VALUE(parentUnitId_, parentUnitId) };


        // unitId Field Functions 
        bool hasUnitId() const { return this->unitId_ != nullptr;};
        void deleteUnitId() { this->unitId_ = nullptr;};
        inline int64_t getUnitId() const { DARABONBA_PTR_GET_DEFAULT(unitId_, 0L) };
        inline CostUnitDtoList& setUnitId(int64_t unitId) { DARABONBA_PTR_SET_VALUE(unitId_, unitId) };


        // unitName Field Functions 
        bool hasUnitName() const { return this->unitName_ != nullptr;};
        void deleteUnitName() { this->unitName_ = nullptr;};
        inline string getUnitName() const { DARABONBA_PTR_GET_DEFAULT(unitName_, "") };
        inline CostUnitDtoList& setUnitName(string unitName) { DARABONBA_PTR_SET_VALUE(unitName_, unitName) };


      protected:
        // The user ID of the owner of the cost center.
        shared_ptr<int64_t> ownerUid_ {};
        // The ID of the parent cost center. A value of -1 indicates the root cost center.
        shared_ptr<int64_t> parentUnitId_ {};
        // The ID of the cost center.
        shared_ptr<int64_t> unitId_ {};
        // The name of the cost center.
        shared_ptr<string> unitName_ {};
      };

      virtual bool empty() const override { return this->costUnitDtoList_ == nullptr; };
      // costUnitDtoList Field Functions 
      bool hasCostUnitDtoList() const { return this->costUnitDtoList_ != nullptr;};
      void deleteCostUnitDtoList() { this->costUnitDtoList_ = nullptr;};
      inline const vector<Data::CostUnitDtoList> & getCostUnitDtoList() const { DARABONBA_PTR_GET_CONST(costUnitDtoList_, vector<Data::CostUnitDtoList>) };
      inline vector<Data::CostUnitDtoList> getCostUnitDtoList() { DARABONBA_PTR_GET(costUnitDtoList_, vector<Data::CostUnitDtoList>) };
      inline Data& setCostUnitDtoList(const vector<Data::CostUnitDtoList> & costUnitDtoList) { DARABONBA_PTR_SET_VALUE(costUnitDtoList_, costUnitDtoList) };
      inline Data& setCostUnitDtoList(vector<Data::CostUnitDtoList> && costUnitDtoList) { DARABONBA_PTR_SET_RVALUE(costUnitDtoList_, costUnitDtoList) };


    protected:
      // The list of cost center entities.
      shared_ptr<vector<Data::CostUnitDtoList>> costUnitDtoList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateCostUnitResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateCostUnitResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateCostUnitResponseBody::Data) };
    inline CreateCostUnitResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateCostUnitResponseBody::Data) };
    inline CreateCostUnitResponseBody& setData(const CreateCostUnitResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateCostUnitResponseBody& setData(CreateCostUnitResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateCostUnitResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCostUnitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateCostUnitResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<CreateCostUnitResponseBody::Data> data_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
