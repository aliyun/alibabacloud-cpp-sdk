// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPDUBBOTRANSCODER_HPP_
#define ALIBABACLOUD_MODELS_HTTPDUBBOTRANSCODER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpDubboTranscoderMothedMapList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpDubboTranscoder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpDubboTranscoder& obj) { 
      DARABONBA_PTR_TO_JSON(dubboServiceGroup, dubboServiceGroup_);
      DARABONBA_PTR_TO_JSON(dubboServiceName, dubboServiceName_);
      DARABONBA_PTR_TO_JSON(dubboServiceVersion, dubboServiceVersion_);
      DARABONBA_PTR_TO_JSON(mothedMapList, mothedMapList_);
    };
    friend void from_json(const Darabonba::Json& j, HttpDubboTranscoder& obj) { 
      DARABONBA_PTR_FROM_JSON(dubboServiceGroup, dubboServiceGroup_);
      DARABONBA_PTR_FROM_JSON(dubboServiceName, dubboServiceName_);
      DARABONBA_PTR_FROM_JSON(dubboServiceVersion, dubboServiceVersion_);
      DARABONBA_PTR_FROM_JSON(mothedMapList, mothedMapList_);
    };
    HttpDubboTranscoder() = default ;
    HttpDubboTranscoder(const HttpDubboTranscoder &) = default ;
    HttpDubboTranscoder(HttpDubboTranscoder &&) = default ;
    HttpDubboTranscoder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpDubboTranscoder() = default ;
    HttpDubboTranscoder& operator=(const HttpDubboTranscoder &) = default ;
    HttpDubboTranscoder& operator=(HttpDubboTranscoder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dubboServiceGroup_ == nullptr
        && return this->dubboServiceName_ == nullptr && return this->dubboServiceVersion_ == nullptr && return this->mothedMapList_ == nullptr; };
    // dubboServiceGroup Field Functions 
    bool hasDubboServiceGroup() const { return this->dubboServiceGroup_ != nullptr;};
    void deleteDubboServiceGroup() { this->dubboServiceGroup_ = nullptr;};
    inline string dubboServiceGroup() const { DARABONBA_PTR_GET_DEFAULT(dubboServiceGroup_, "") };
    inline HttpDubboTranscoder& setDubboServiceGroup(string dubboServiceGroup) { DARABONBA_PTR_SET_VALUE(dubboServiceGroup_, dubboServiceGroup) };


    // dubboServiceName Field Functions 
    bool hasDubboServiceName() const { return this->dubboServiceName_ != nullptr;};
    void deleteDubboServiceName() { this->dubboServiceName_ = nullptr;};
    inline string dubboServiceName() const { DARABONBA_PTR_GET_DEFAULT(dubboServiceName_, "") };
    inline HttpDubboTranscoder& setDubboServiceName(string dubboServiceName) { DARABONBA_PTR_SET_VALUE(dubboServiceName_, dubboServiceName) };


    // dubboServiceVersion Field Functions 
    bool hasDubboServiceVersion() const { return this->dubboServiceVersion_ != nullptr;};
    void deleteDubboServiceVersion() { this->dubboServiceVersion_ = nullptr;};
    inline string dubboServiceVersion() const { DARABONBA_PTR_GET_DEFAULT(dubboServiceVersion_, "") };
    inline HttpDubboTranscoder& setDubboServiceVersion(string dubboServiceVersion) { DARABONBA_PTR_SET_VALUE(dubboServiceVersion_, dubboServiceVersion) };


    // mothedMapList Field Functions 
    bool hasMothedMapList() const { return this->mothedMapList_ != nullptr;};
    void deleteMothedMapList() { this->mothedMapList_ = nullptr;};
    inline const vector<HttpDubboTranscoderMothedMapList> & mothedMapList() const { DARABONBA_PTR_GET_CONST(mothedMapList_, vector<HttpDubboTranscoderMothedMapList>) };
    inline vector<HttpDubboTranscoderMothedMapList> mothedMapList() { DARABONBA_PTR_GET(mothedMapList_, vector<HttpDubboTranscoderMothedMapList>) };
    inline HttpDubboTranscoder& setMothedMapList(const vector<HttpDubboTranscoderMothedMapList> & mothedMapList) { DARABONBA_PTR_SET_VALUE(mothedMapList_, mothedMapList) };
    inline HttpDubboTranscoder& setMothedMapList(vector<HttpDubboTranscoderMothedMapList> && mothedMapList) { DARABONBA_PTR_SET_RVALUE(mothedMapList_, mothedMapList) };


  protected:
    std::shared_ptr<string> dubboServiceGroup_ = nullptr;
    std::shared_ptr<string> dubboServiceName_ = nullptr;
    std::shared_ptr<string> dubboServiceVersion_ = nullptr;
    std::shared_ptr<vector<HttpDubboTranscoderMothedMapList>> mothedMapList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
