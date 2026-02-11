// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVERLESSTOPNAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVERLESSTOPNAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class ListServerlessTopNAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServerlessTopNAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListServerlessTopNAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListServerlessTopNAppsResponseBody() = default ;
    ListServerlessTopNAppsResponseBody(const ListServerlessTopNAppsResponseBody &) = default ;
    ListServerlessTopNAppsResponseBody(ListServerlessTopNAppsResponseBody &&) = default ;
    ListServerlessTopNAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServerlessTopNAppsResponseBody() = default ;
    ListServerlessTopNAppsResponseBody& operator=(const ListServerlessTopNAppsResponseBody &) = default ;
    ListServerlessTopNAppsResponseBody& operator=(ListServerlessTopNAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Error, error_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Pid, pid_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Rt, rt_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Error, error_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Pid, pid_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Rt, rt_);
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
      virtual bool empty() const override { return this->count_ == nullptr
        && this->error_ == nullptr && this->name_ == nullptr && this->pid_ == nullptr && this->region_ == nullptr && this->rt_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Data& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline int32_t getError() const { DARABONBA_PTR_GET_DEFAULT(error_, 0) };
      inline Data& setError(int32_t error) { DARABONBA_PTR_SET_VALUE(error_, error) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // pid Field Functions 
      bool hasPid() const { return this->pid_ != nullptr;};
      void deletePid() { this->pid_ = nullptr;};
      inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
      inline Data& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Data& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // rt Field Functions 
      bool hasRt() const { return this->rt_ != nullptr;};
      void deleteRt() { this->rt_ = nullptr;};
      inline float getRt() const { DARABONBA_PTR_GET_DEFAULT(rt_, 0.0) };
      inline Data& setRt(float rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };


    protected:
      shared_ptr<int32_t> count_ {};
      shared_ptr<int32_t> error_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> pid_ {};
      shared_ptr<string> region_ {};
      shared_ptr<float> rt_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListServerlessTopNAppsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListServerlessTopNAppsResponseBody::Data>) };
    inline vector<ListServerlessTopNAppsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListServerlessTopNAppsResponseBody::Data>) };
    inline ListServerlessTopNAppsResponseBody& setData(const vector<ListServerlessTopNAppsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListServerlessTopNAppsResponseBody& setData(vector<ListServerlessTopNAppsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServerlessTopNAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListServerlessTopNAppsResponseBody::Data>> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
