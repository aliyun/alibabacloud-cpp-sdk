// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTRESPONSEBODYMEDIAAUDITRESULTVIDEORESULTLIVERESULTCOUNTERLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTRESPONSEBODYMEDIAAUDITRESULTVIDEORESULTLIVERESULTCOUNTERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResultCounterList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResultCounterList& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Label, label_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResultCounterList& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
    };
    GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResultCounterList() = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResultCounterList(const GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResultCounterList &) = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResultCounterList(GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResultCounterList &&) = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResultCounterList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResultCounterList() = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResultCounterList& operator=(const GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResultCounterList &) = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResultCounterList& operator=(GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResultCounterList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->label_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResultCounterList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResultCounterList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


  protected:
    // The number of frames.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The category of the review result. Valid values:
    // 
    // - **live**: The content contains undesirable scenes.
    // - **normal**: normal content.
    std::shared_ptr<string> label_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
