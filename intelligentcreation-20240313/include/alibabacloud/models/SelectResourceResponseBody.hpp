// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SELECTRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SelectResourceResponseBodyResourceInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class SelectResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunUid, aliyunUid_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resourceInfoList, resourceInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, SelectResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunUid, aliyunUid_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resourceInfoList, resourceInfoList_);
    };
    SelectResourceResponseBody() = default ;
    SelectResourceResponseBody(const SelectResourceResponseBody &) = default ;
    SelectResourceResponseBody(SelectResourceResponseBody &&) = default ;
    SelectResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectResourceResponseBody() = default ;
    SelectResourceResponseBody& operator=(const SelectResourceResponseBody &) = default ;
    SelectResourceResponseBody& operator=(SelectResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && return this->requestId_ == nullptr && return this->resourceInfoList_ == nullptr; };
    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline string aliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
    inline SelectResourceResponseBody& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SelectResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceInfoList Field Functions 
    bool hasResourceInfoList() const { return this->resourceInfoList_ != nullptr;};
    void deleteResourceInfoList() { this->resourceInfoList_ = nullptr;};
    inline const vector<SelectResourceResponseBodyResourceInfoList> & resourceInfoList() const { DARABONBA_PTR_GET_CONST(resourceInfoList_, vector<SelectResourceResponseBodyResourceInfoList>) };
    inline vector<SelectResourceResponseBodyResourceInfoList> resourceInfoList() { DARABONBA_PTR_GET(resourceInfoList_, vector<SelectResourceResponseBodyResourceInfoList>) };
    inline SelectResourceResponseBody& setResourceInfoList(const vector<SelectResourceResponseBodyResourceInfoList> & resourceInfoList) { DARABONBA_PTR_SET_VALUE(resourceInfoList_, resourceInfoList) };
    inline SelectResourceResponseBody& setResourceInfoList(vector<SelectResourceResponseBodyResourceInfoList> && resourceInfoList) { DARABONBA_PTR_SET_RVALUE(resourceInfoList_, resourceInfoList) };


  protected:
    std::shared_ptr<string> aliyunUid_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<SelectResourceResponseBodyResourceInfoList>> resourceInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
