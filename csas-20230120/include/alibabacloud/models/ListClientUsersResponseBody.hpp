// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLIENTUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLIENTUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListClientUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClientUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClientUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListClientUsersResponseBody() = default ;
    ListClientUsersResponseBody(const ListClientUsersResponseBody &) = default ;
    ListClientUsersResponseBody(ListClientUsersResponseBody &&) = default ;
    ListClientUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClientUsersResponseBody() = default ;
    ListClientUsersResponseBody& operator=(const ListClientUsersResponseBody &) = default ;
    ListClientUsersResponseBody& operator=(ListClientUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataList, dataList_);
        DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataList, dataList_);
        DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
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
      class DataList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataList& obj) { 
          DARABONBA_PTR_TO_JSON(Department, department_);
          DARABONBA_PTR_TO_JSON(DepartmentId, departmentId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IdpConfigId, idpConfigId_);
          DARABONBA_PTR_TO_JSON(MobileNumber, mobileNumber_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(Username, username_);
        };
        friend void from_json(const Darabonba::Json& j, DataList& obj) { 
          DARABONBA_PTR_FROM_JSON(Department, department_);
          DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IdpConfigId, idpConfigId_);
          DARABONBA_PTR_FROM_JSON(MobileNumber, mobileNumber_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(Username, username_);
        };
        DataList() = default ;
        DataList(const DataList &) = default ;
        DataList(DataList &&) = default ;
        DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataList() = default ;
        DataList& operator=(const DataList &) = default ;
        DataList& operator=(DataList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Department : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Department& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Department& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          Department() = default ;
          Department(const Department &) = default ;
          Department(Department &&) = default ;
          Department(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Department() = default ;
          Department& operator=(const Department &) = default ;
          Department& operator=(Department &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Department& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Department& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> id_ {};
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->department_ == nullptr
        && this->departmentId_ == nullptr && this->description_ == nullptr && this->email_ == nullptr && this->id_ == nullptr && this->idpConfigId_ == nullptr
        && this->mobileNumber_ == nullptr && this->status_ == nullptr && this->userId_ == nullptr && this->username_ == nullptr; };
        // department Field Functions 
        bool hasDepartment() const { return this->department_ != nullptr;};
        void deleteDepartment() { this->department_ = nullptr;};
        inline const DataList::Department & getDepartment() const { DARABONBA_PTR_GET_CONST(department_, DataList::Department) };
        inline DataList::Department getDepartment() { DARABONBA_PTR_GET(department_, DataList::Department) };
        inline DataList& setDepartment(const DataList::Department & department) { DARABONBA_PTR_SET_VALUE(department_, department) };
        inline DataList& setDepartment(DataList::Department && department) { DARABONBA_PTR_SET_RVALUE(department_, department) };


        // departmentId Field Functions 
        bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
        void deleteDepartmentId() { this->departmentId_ = nullptr;};
        inline string getDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
        inline DataList& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline DataList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline DataList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline DataList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // idpConfigId Field Functions 
        bool hasIdpConfigId() const { return this->idpConfigId_ != nullptr;};
        void deleteIdpConfigId() { this->idpConfigId_ = nullptr;};
        inline string getIdpConfigId() const { DARABONBA_PTR_GET_DEFAULT(idpConfigId_, "") };
        inline DataList& setIdpConfigId(string idpConfigId) { DARABONBA_PTR_SET_VALUE(idpConfigId_, idpConfigId) };


        // mobileNumber Field Functions 
        bool hasMobileNumber() const { return this->mobileNumber_ != nullptr;};
        void deleteMobileNumber() { this->mobileNumber_ = nullptr;};
        inline string getMobileNumber() const { DARABONBA_PTR_GET_DEFAULT(mobileNumber_, "") };
        inline DataList& setMobileNumber(string mobileNumber) { DARABONBA_PTR_SET_VALUE(mobileNumber_, mobileNumber) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline DataList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline DataList& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      protected:
        shared_ptr<DataList::Department> department_ {};
        shared_ptr<string> departmentId_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> email_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> idpConfigId_ {};
        shared_ptr<string> mobileNumber_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> username_ {};
      };

      virtual bool empty() const override { return this->dataList_ == nullptr
        && this->totalNum_ == nullptr; };
      // dataList Field Functions 
      bool hasDataList() const { return this->dataList_ != nullptr;};
      void deleteDataList() { this->dataList_ = nullptr;};
      inline const vector<Data::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<Data::DataList>) };
      inline vector<Data::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<Data::DataList>) };
      inline Data& setDataList(const vector<Data::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
      inline Data& setDataList(vector<Data::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


      // totalNum Field Functions 
      bool hasTotalNum() const { return this->totalNum_ != nullptr;};
      void deleteTotalNum() { this->totalNum_ = nullptr;};
      inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
      inline Data& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    protected:
      shared_ptr<vector<Data::DataList>> dataList_ {};
      shared_ptr<int64_t> totalNum_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListClientUsersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListClientUsersResponseBody::Data) };
    inline ListClientUsersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListClientUsersResponseBody::Data) };
    inline ListClientUsersResponseBody& setData(const ListClientUsersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListClientUsersResponseBody& setData(ListClientUsersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClientUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListClientUsersResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
