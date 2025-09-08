// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTIMODALGUARDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MULTIMODALGUARDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MultiModalGuardResponseBodyDataDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class MultiModalGuardResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultiModalGuardResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, MultiModalGuardResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
    };
    MultiModalGuardResponseBodyData() = default ;
    MultiModalGuardResponseBodyData(const MultiModalGuardResponseBodyData &) = default ;
    MultiModalGuardResponseBodyData(MultiModalGuardResponseBodyData &&) = default ;
    MultiModalGuardResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultiModalGuardResponseBodyData() = default ;
    MultiModalGuardResponseBodyData& operator=(const MultiModalGuardResponseBodyData &) = default ;
    MultiModalGuardResponseBodyData& operator=(MultiModalGuardResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataId_ != nullptr
        && this->detail_ != nullptr && this->suggestion_ != nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline MultiModalGuardResponseBodyData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const vector<Models::MultiModalGuardResponseBodyDataDetail> & detail() const { DARABONBA_PTR_GET_CONST(detail_, vector<Models::MultiModalGuardResponseBodyDataDetail>) };
    inline vector<Models::MultiModalGuardResponseBodyDataDetail> detail() { DARABONBA_PTR_GET(detail_, vector<Models::MultiModalGuardResponseBodyDataDetail>) };
    inline MultiModalGuardResponseBodyData& setDetail(const vector<Models::MultiModalGuardResponseBodyDataDetail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline MultiModalGuardResponseBodyData& setDetail(vector<Models::MultiModalGuardResponseBodyDataDetail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline MultiModalGuardResponseBodyData& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    std::shared_ptr<string> dataId_ = nullptr;
    std::shared_ptr<vector<Models::MultiModalGuardResponseBodyDataDetail>> detail_ = nullptr;
    std::shared_ptr<string> suggestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
