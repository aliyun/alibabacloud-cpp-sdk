// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPUTETASK2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPUTETASK2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class CreateComputeTask2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComputeTask2Request& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(dataSetIds, dataSetIds_);
      DARABONBA_PTR_TO_JSON(morseInfoList, morseInfoList_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(remarks, remarks_);
      DARABONBA_PTR_TO_JSON(taskSource, taskSource_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComputeTask2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(dataSetIds, dataSetIds_);
      DARABONBA_PTR_FROM_JSON(morseInfoList, morseInfoList_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(remarks, remarks_);
      DARABONBA_PTR_FROM_JSON(taskSource, taskSource_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateComputeTask2Request() = default ;
    CreateComputeTask2Request(const CreateComputeTask2Request &) = default ;
    CreateComputeTask2Request(CreateComputeTask2Request &&) = default ;
    CreateComputeTask2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComputeTask2Request() = default ;
    CreateComputeTask2Request& operator=(const CreateComputeTask2Request &) = default ;
    CreateComputeTask2Request& operator=(CreateComputeTask2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MorseInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MorseInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(cuId, cuId_);
        DARABONBA_PTR_TO_JSON(cuVersion, cuVersion_);
      };
      friend void from_json(const Darabonba::Json& j, MorseInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(cuId, cuId_);
        DARABONBA_PTR_FROM_JSON(cuVersion, cuVersion_);
      };
      MorseInfoList() = default ;
      MorseInfoList(const MorseInfoList &) = default ;
      MorseInfoList(MorseInfoList &&) = default ;
      MorseInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MorseInfoList() = default ;
      MorseInfoList& operator=(const MorseInfoList &) = default ;
      MorseInfoList& operator=(MorseInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cuId_ == nullptr
        && this->cuVersion_ == nullptr; };
      // cuId Field Functions 
      bool hasCuId() const { return this->cuId_ != nullptr;};
      void deleteCuId() { this->cuId_ = nullptr;};
      inline string getCuId() const { DARABONBA_PTR_GET_DEFAULT(cuId_, "") };
      inline MorseInfoList& setCuId(string cuId) { DARABONBA_PTR_SET_VALUE(cuId_, cuId) };


      // cuVersion Field Functions 
      bool hasCuVersion() const { return this->cuVersion_ != nullptr;};
      void deleteCuVersion() { this->cuVersion_ = nullptr;};
      inline string getCuVersion() const { DARABONBA_PTR_GET_DEFAULT(cuVersion_, "") };
      inline MorseInfoList& setCuVersion(string cuVersion) { DARABONBA_PTR_SET_VALUE(cuVersion_, cuVersion) };


    protected:
      shared_ptr<string> cuId_ {};
      shared_ptr<string> cuVersion_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->clientId_ == nullptr && this->dataSetIds_ == nullptr && this->morseInfoList_ == nullptr && this->name_ == nullptr && this->remarks_ == nullptr
        && this->taskSource_ == nullptr && this->type_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline CreateComputeTask2Request& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline CreateComputeTask2Request& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // dataSetIds Field Functions 
    bool hasDataSetIds() const { return this->dataSetIds_ != nullptr;};
    void deleteDataSetIds() { this->dataSetIds_ = nullptr;};
    inline string getDataSetIds() const { DARABONBA_PTR_GET_DEFAULT(dataSetIds_, "") };
    inline CreateComputeTask2Request& setDataSetIds(string dataSetIds) { DARABONBA_PTR_SET_VALUE(dataSetIds_, dataSetIds) };


    // morseInfoList Field Functions 
    bool hasMorseInfoList() const { return this->morseInfoList_ != nullptr;};
    void deleteMorseInfoList() { this->morseInfoList_ = nullptr;};
    inline const vector<CreateComputeTask2Request::MorseInfoList> & getMorseInfoList() const { DARABONBA_PTR_GET_CONST(morseInfoList_, vector<CreateComputeTask2Request::MorseInfoList>) };
    inline vector<CreateComputeTask2Request::MorseInfoList> getMorseInfoList() { DARABONBA_PTR_GET(morseInfoList_, vector<CreateComputeTask2Request::MorseInfoList>) };
    inline CreateComputeTask2Request& setMorseInfoList(const vector<CreateComputeTask2Request::MorseInfoList> & morseInfoList) { DARABONBA_PTR_SET_VALUE(morseInfoList_, morseInfoList) };
    inline CreateComputeTask2Request& setMorseInfoList(vector<CreateComputeTask2Request::MorseInfoList> && morseInfoList) { DARABONBA_PTR_SET_RVALUE(morseInfoList_, morseInfoList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateComputeTask2Request& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remarks Field Functions 
    bool hasRemarks() const { return this->remarks_ != nullptr;};
    void deleteRemarks() { this->remarks_ = nullptr;};
    inline string getRemarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
    inline CreateComputeTask2Request& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


    // taskSource Field Functions 
    bool hasTaskSource() const { return this->taskSource_ != nullptr;};
    void deleteTaskSource() { this->taskSource_ = nullptr;};
    inline string getTaskSource() const { DARABONBA_PTR_GET_DEFAULT(taskSource_, "") };
    inline CreateComputeTask2Request& setTaskSource(string taskSource) { DARABONBA_PTR_SET_VALUE(taskSource_, taskSource) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateComputeTask2Request& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<int64_t> appId_ {};
    shared_ptr<int64_t> clientId_ {};
    shared_ptr<string> dataSetIds_ {};
    shared_ptr<vector<CreateComputeTask2Request::MorseInfoList>> morseInfoList_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> remarks_ {};
    shared_ptr<string> taskSource_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
