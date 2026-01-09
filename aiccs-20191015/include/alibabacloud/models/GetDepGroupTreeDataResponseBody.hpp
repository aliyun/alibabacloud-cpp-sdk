// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPGROUPTREEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEPGROUPTREEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetDepGroupTreeDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDepGroupTreeDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDepGroupTreeDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDepGroupTreeDataResponseBody() = default ;
    GetDepGroupTreeDataResponseBody(const GetDepGroupTreeDataResponseBody &) = default ;
    GetDepGroupTreeDataResponseBody(GetDepGroupTreeDataResponseBody &&) = default ;
    GetDepGroupTreeDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDepGroupTreeDataResponseBody() = default ;
    GetDepGroupTreeDataResponseBody& operator=(const GetDepGroupTreeDataResponseBody &) = default ;
    GetDepGroupTreeDataResponseBody& operator=(GetDepGroupTreeDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DepGroupId, depGroupId_);
        DARABONBA_PTR_TO_JSON(DepGroupName, depGroupName_);
        DARABONBA_PTR_TO_JSON(GroupDTOS, groupDTOS_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DepGroupId, depGroupId_);
        DARABONBA_PTR_FROM_JSON(DepGroupName, depGroupName_);
        DARABONBA_PTR_FROM_JSON(GroupDTOS, groupDTOS_);
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
      class GroupDTOS : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GroupDTOS& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, GroupDTOS& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
        };
        GroupDTOS() = default ;
        GroupDTOS(const GroupDTOS &) = default ;
        GroupDTOS(GroupDTOS &&) = default ;
        GroupDTOS(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GroupDTOS() = default ;
        GroupDTOS& operator=(const GroupDTOS &) = default ;
        GroupDTOS& operator=(GroupDTOS &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->skillGroupId_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline GroupDTOS& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // skillGroupId Field Functions 
        bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
        void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
        inline int64_t getSkillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, 0L) };
        inline GroupDTOS& setSkillGroupId(int64_t skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> skillGroupId_ {};
      };

      virtual bool empty() const override { return this->depGroupId_ == nullptr
        && this->depGroupName_ == nullptr && this->groupDTOS_ == nullptr; };
      // depGroupId Field Functions 
      bool hasDepGroupId() const { return this->depGroupId_ != nullptr;};
      void deleteDepGroupId() { this->depGroupId_ = nullptr;};
      inline string getDepGroupId() const { DARABONBA_PTR_GET_DEFAULT(depGroupId_, "") };
      inline Data& setDepGroupId(string depGroupId) { DARABONBA_PTR_SET_VALUE(depGroupId_, depGroupId) };


      // depGroupName Field Functions 
      bool hasDepGroupName() const { return this->depGroupName_ != nullptr;};
      void deleteDepGroupName() { this->depGroupName_ = nullptr;};
      inline string getDepGroupName() const { DARABONBA_PTR_GET_DEFAULT(depGroupName_, "") };
      inline Data& setDepGroupName(string depGroupName) { DARABONBA_PTR_SET_VALUE(depGroupName_, depGroupName) };


      // groupDTOS Field Functions 
      bool hasGroupDTOS() const { return this->groupDTOS_ != nullptr;};
      void deleteGroupDTOS() { this->groupDTOS_ = nullptr;};
      inline const vector<Data::GroupDTOS> & getGroupDTOS() const { DARABONBA_PTR_GET_CONST(groupDTOS_, vector<Data::GroupDTOS>) };
      inline vector<Data::GroupDTOS> getGroupDTOS() { DARABONBA_PTR_GET(groupDTOS_, vector<Data::GroupDTOS>) };
      inline Data& setGroupDTOS(const vector<Data::GroupDTOS> & groupDTOS) { DARABONBA_PTR_SET_VALUE(groupDTOS_, groupDTOS) };
      inline Data& setGroupDTOS(vector<Data::GroupDTOS> && groupDTOS) { DARABONBA_PTR_SET_RVALUE(groupDTOS_, groupDTOS) };


    protected:
      shared_ptr<string> depGroupId_ {};
      shared_ptr<string> depGroupName_ {};
      shared_ptr<vector<Data::GroupDTOS>> groupDTOS_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDepGroupTreeDataResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetDepGroupTreeDataResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetDepGroupTreeDataResponseBody::Data>) };
    inline vector<GetDepGroupTreeDataResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetDepGroupTreeDataResponseBody::Data>) };
    inline GetDepGroupTreeDataResponseBody& setData(const vector<GetDepGroupTreeDataResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDepGroupTreeDataResponseBody& setData(vector<GetDepGroupTreeDataResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDepGroupTreeDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDepGroupTreeDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetDepGroupTreeDataResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetDepGroupTreeDataResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
