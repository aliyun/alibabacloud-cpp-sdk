// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTIMODALGUARDFORBASE64RESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MULTIMODALGUARDFORBASE64RESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MultiModalGuardForBase64ResponseBodyDataDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class MultiModalGuardForBase64ResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultiModalGuardForBase64ResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, MultiModalGuardForBase64ResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
    };
    MultiModalGuardForBase64ResponseBodyData() = default ;
    MultiModalGuardForBase64ResponseBodyData(const MultiModalGuardForBase64ResponseBodyData &) = default ;
    MultiModalGuardForBase64ResponseBodyData(MultiModalGuardForBase64ResponseBodyData &&) = default ;
    MultiModalGuardForBase64ResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultiModalGuardForBase64ResponseBodyData() = default ;
    MultiModalGuardForBase64ResponseBodyData& operator=(const MultiModalGuardForBase64ResponseBodyData &) = default ;
    MultiModalGuardForBase64ResponseBodyData& operator=(MultiModalGuardForBase64ResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataId_ == nullptr
        && return this->detail_ == nullptr && return this->suggestion_ == nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline MultiModalGuardForBase64ResponseBodyData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const vector<Models::MultiModalGuardForBase64ResponseBodyDataDetail> & detail() const { DARABONBA_PTR_GET_CONST(detail_, vector<Models::MultiModalGuardForBase64ResponseBodyDataDetail>) };
    inline vector<Models::MultiModalGuardForBase64ResponseBodyDataDetail> detail() { DARABONBA_PTR_GET(detail_, vector<Models::MultiModalGuardForBase64ResponseBodyDataDetail>) };
    inline MultiModalGuardForBase64ResponseBodyData& setDetail(const vector<Models::MultiModalGuardForBase64ResponseBodyDataDetail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline MultiModalGuardForBase64ResponseBodyData& setDetail(vector<Models::MultiModalGuardForBase64ResponseBodyDataDetail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline MultiModalGuardForBase64ResponseBodyData& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    std::shared_ptr<string> dataId_ = nullptr;
    std::shared_ptr<vector<Models::MultiModalGuardForBase64ResponseBodyDataDetail>> detail_ = nullptr;
    std::shared_ptr<string> suggestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
