// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMARTSYSAVATARMODELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSMARTSYSAVATARMODELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSmartSysAvatarModelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmartSysAvatarModelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SmartSysAvatarModelList, smartSysAvatarModelList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmartSysAvatarModelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SmartSysAvatarModelList, smartSysAvatarModelList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSmartSysAvatarModelsResponseBody() = default ;
    ListSmartSysAvatarModelsResponseBody(const ListSmartSysAvatarModelsResponseBody &) = default ;
    ListSmartSysAvatarModelsResponseBody(ListSmartSysAvatarModelsResponseBody &&) = default ;
    ListSmartSysAvatarModelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmartSysAvatarModelsResponseBody() = default ;
    ListSmartSysAvatarModelsResponseBody& operator=(const ListSmartSysAvatarModelsResponseBody &) = default ;
    ListSmartSysAvatarModelsResponseBody& operator=(ListSmartSysAvatarModelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->smartSysAvatarModelList_ == nullptr && return this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSmartSysAvatarModelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // smartSysAvatarModelList Field Functions 
    bool hasSmartSysAvatarModelList() const { return this->smartSysAvatarModelList_ != nullptr;};
    void deleteSmartSysAvatarModelList() { this->smartSysAvatarModelList_ = nullptr;};
    inline const vector<ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList> & smartSysAvatarModelList() const { DARABONBA_PTR_GET_CONST(smartSysAvatarModelList_, vector<ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList>) };
    inline vector<ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList> smartSysAvatarModelList() { DARABONBA_PTR_GET(smartSysAvatarModelList_, vector<ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList>) };
    inline ListSmartSysAvatarModelsResponseBody& setSmartSysAvatarModelList(const vector<ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList> & smartSysAvatarModelList) { DARABONBA_PTR_SET_VALUE(smartSysAvatarModelList_, smartSysAvatarModelList) };
    inline ListSmartSysAvatarModelsResponseBody& setSmartSysAvatarModelList(vector<ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList> && smartSysAvatarModelList) { DARABONBA_PTR_SET_RVALUE(smartSysAvatarModelList_, smartSysAvatarModelList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSmartSysAvatarModelsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried digital humans.
    std::shared_ptr<vector<ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList>> smartSysAvatarModelList_ = nullptr;
    // The total number of system digital human images returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
