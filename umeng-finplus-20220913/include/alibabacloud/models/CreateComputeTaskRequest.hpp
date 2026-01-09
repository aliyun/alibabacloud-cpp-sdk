// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPUTETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPUTETASKREQUEST_HPP_
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
  class CreateComputeTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComputeTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(dataSetIds, dataSetIds_);
      DARABONBA_PTR_TO_JSON(morseInfoList, morseInfoList_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(remarks, remarks_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComputeTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(dataSetIds, dataSetIds_);
      DARABONBA_PTR_FROM_JSON(morseInfoList, morseInfoList_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(remarks, remarks_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateComputeTaskRequest() = default ;
    CreateComputeTaskRequest(const CreateComputeTaskRequest &) = default ;
    CreateComputeTaskRequest(CreateComputeTaskRequest &&) = default ;
    CreateComputeTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComputeTaskRequest() = default ;
    CreateComputeTaskRequest& operator=(const CreateComputeTaskRequest &) = default ;
    CreateComputeTaskRequest& operator=(CreateComputeTaskRequest &&) = default ;
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
        && this->dataSetIds_ == nullptr && this->morseInfoList_ == nullptr && this->name_ == nullptr && this->remarks_ == nullptr && this->type_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline CreateComputeTaskRequest& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dataSetIds Field Functions 
    bool hasDataSetIds() const { return this->dataSetIds_ != nullptr;};
    void deleteDataSetIds() { this->dataSetIds_ = nullptr;};
    inline string getDataSetIds() const { DARABONBA_PTR_GET_DEFAULT(dataSetIds_, "") };
    inline CreateComputeTaskRequest& setDataSetIds(string dataSetIds) { DARABONBA_PTR_SET_VALUE(dataSetIds_, dataSetIds) };


    // morseInfoList Field Functions 
    bool hasMorseInfoList() const { return this->morseInfoList_ != nullptr;};
    void deleteMorseInfoList() { this->morseInfoList_ = nullptr;};
    inline const vector<CreateComputeTaskRequest::MorseInfoList> & getMorseInfoList() const { DARABONBA_PTR_GET_CONST(morseInfoList_, vector<CreateComputeTaskRequest::MorseInfoList>) };
    inline vector<CreateComputeTaskRequest::MorseInfoList> getMorseInfoList() { DARABONBA_PTR_GET(morseInfoList_, vector<CreateComputeTaskRequest::MorseInfoList>) };
    inline CreateComputeTaskRequest& setMorseInfoList(const vector<CreateComputeTaskRequest::MorseInfoList> & morseInfoList) { DARABONBA_PTR_SET_VALUE(morseInfoList_, morseInfoList) };
    inline CreateComputeTaskRequest& setMorseInfoList(vector<CreateComputeTaskRequest::MorseInfoList> && morseInfoList) { DARABONBA_PTR_SET_RVALUE(morseInfoList_, morseInfoList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateComputeTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remarks Field Functions 
    bool hasRemarks() const { return this->remarks_ != nullptr;};
    void deleteRemarks() { this->remarks_ = nullptr;};
    inline string getRemarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
    inline CreateComputeTaskRequest& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateComputeTaskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<int64_t> appId_ {};
    shared_ptr<string> dataSetIds_ {};
    shared_ptr<vector<CreateComputeTaskRequest::MorseInfoList>> morseInfoList_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> remarks_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
