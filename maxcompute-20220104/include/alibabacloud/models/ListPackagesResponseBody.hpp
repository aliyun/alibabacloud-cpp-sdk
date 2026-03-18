// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPACKAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListPackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListPackagesResponseBody() = default ;
    ListPackagesResponseBody(const ListPackagesResponseBody &) = default ;
    ListPackagesResponseBody(ListPackagesResponseBody &&) = default ;
    ListPackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPackagesResponseBody() = default ;
    ListPackagesResponseBody& operator=(const ListPackagesResponseBody &) = default ;
    ListPackagesResponseBody& operator=(ListPackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(createdPackages, createdPackages_);
        DARABONBA_PTR_TO_JSON(installedPackages, installedPackages_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(createdPackages, createdPackages_);
        DARABONBA_PTR_FROM_JSON(installedPackages, installedPackages_);
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
      class InstalledPackages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstalledPackages& obj) { 
          DARABONBA_PTR_TO_JSON(installTime, installTime_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(sourceProject, sourceProject_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, InstalledPackages& obj) { 
          DARABONBA_PTR_FROM_JSON(installTime, installTime_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(sourceProject, sourceProject_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        InstalledPackages() = default ;
        InstalledPackages(const InstalledPackages &) = default ;
        InstalledPackages(InstalledPackages &&) = default ;
        InstalledPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstalledPackages() = default ;
        InstalledPackages& operator=(const InstalledPackages &) = default ;
        InstalledPackages& operator=(InstalledPackages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->installTime_ == nullptr
        && this->name_ == nullptr && this->sourceProject_ == nullptr && this->status_ == nullptr; };
        // installTime Field Functions 
        bool hasInstallTime() const { return this->installTime_ != nullptr;};
        void deleteInstallTime() { this->installTime_ = nullptr;};
        inline int64_t getInstallTime() const { DARABONBA_PTR_GET_DEFAULT(installTime_, 0L) };
        inline InstalledPackages& setInstallTime(int64_t installTime) { DARABONBA_PTR_SET_VALUE(installTime_, installTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline InstalledPackages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // sourceProject Field Functions 
        bool hasSourceProject() const { return this->sourceProject_ != nullptr;};
        void deleteSourceProject() { this->sourceProject_ = nullptr;};
        inline string getSourceProject() const { DARABONBA_PTR_GET_DEFAULT(sourceProject_, "") };
        inline InstalledPackages& setSourceProject(string sourceProject) { DARABONBA_PTR_SET_VALUE(sourceProject_, sourceProject) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline InstalledPackages& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<int64_t> installTime_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> sourceProject_ {};
        shared_ptr<string> status_ {};
      };

      class CreatedPackages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CreatedPackages& obj) { 
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, CreatedPackages& obj) { 
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        CreatedPackages() = default ;
        CreatedPackages(const CreatedPackages &) = default ;
        CreatedPackages(CreatedPackages &&) = default ;
        CreatedPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CreatedPackages() = default ;
        CreatedPackages& operator=(const CreatedPackages &) = default ;
        CreatedPackages& operator=(CreatedPackages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->name_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline CreatedPackages& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CreatedPackages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->createdPackages_ == nullptr
        && this->installedPackages_ == nullptr; };
      // createdPackages Field Functions 
      bool hasCreatedPackages() const { return this->createdPackages_ != nullptr;};
      void deleteCreatedPackages() { this->createdPackages_ = nullptr;};
      inline const vector<Data::CreatedPackages> & getCreatedPackages() const { DARABONBA_PTR_GET_CONST(createdPackages_, vector<Data::CreatedPackages>) };
      inline vector<Data::CreatedPackages> getCreatedPackages() { DARABONBA_PTR_GET(createdPackages_, vector<Data::CreatedPackages>) };
      inline Data& setCreatedPackages(const vector<Data::CreatedPackages> & createdPackages) { DARABONBA_PTR_SET_VALUE(createdPackages_, createdPackages) };
      inline Data& setCreatedPackages(vector<Data::CreatedPackages> && createdPackages) { DARABONBA_PTR_SET_RVALUE(createdPackages_, createdPackages) };


      // installedPackages Field Functions 
      bool hasInstalledPackages() const { return this->installedPackages_ != nullptr;};
      void deleteInstalledPackages() { this->installedPackages_ = nullptr;};
      inline const vector<Data::InstalledPackages> & getInstalledPackages() const { DARABONBA_PTR_GET_CONST(installedPackages_, vector<Data::InstalledPackages>) };
      inline vector<Data::InstalledPackages> getInstalledPackages() { DARABONBA_PTR_GET(installedPackages_, vector<Data::InstalledPackages>) };
      inline Data& setInstalledPackages(const vector<Data::InstalledPackages> & installedPackages) { DARABONBA_PTR_SET_VALUE(installedPackages_, installedPackages) };
      inline Data& setInstalledPackages(vector<Data::InstalledPackages> && installedPackages) { DARABONBA_PTR_SET_RVALUE(installedPackages_, installedPackages) };


    protected:
      shared_ptr<vector<Data::CreatedPackages>> createdPackages_ {};
      shared_ptr<vector<Data::InstalledPackages>> installedPackages_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListPackagesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListPackagesResponseBody::Data) };
    inline ListPackagesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListPackagesResponseBody::Data) };
    inline ListPackagesResponseBody& setData(const ListPackagesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListPackagesResponseBody& setData(ListPackagesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListPackagesResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
