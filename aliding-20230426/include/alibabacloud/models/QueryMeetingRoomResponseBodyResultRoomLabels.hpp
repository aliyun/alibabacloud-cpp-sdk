// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEETINGROOMRESPONSEBODYRESULTROOMLABELS_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEETINGROOMRESPONSEBODYRESULTROOMLABELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryMeetingRoomResponseBodyResultRoomLabels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMeetingRoomResponseBodyResultRoomLabels& obj) { 
      DARABONBA_PTR_TO_JSON(LabelId, labelId_);
      DARABONBA_PTR_TO_JSON(LabelName, labelName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMeetingRoomResponseBodyResultRoomLabels& obj) { 
      DARABONBA_PTR_FROM_JSON(LabelId, labelId_);
      DARABONBA_PTR_FROM_JSON(LabelName, labelName_);
    };
    QueryMeetingRoomResponseBodyResultRoomLabels() = default ;
    QueryMeetingRoomResponseBodyResultRoomLabels(const QueryMeetingRoomResponseBodyResultRoomLabels &) = default ;
    QueryMeetingRoomResponseBodyResultRoomLabels(QueryMeetingRoomResponseBodyResultRoomLabels &&) = default ;
    QueryMeetingRoomResponseBodyResultRoomLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMeetingRoomResponseBodyResultRoomLabels() = default ;
    QueryMeetingRoomResponseBodyResultRoomLabels& operator=(const QueryMeetingRoomResponseBodyResultRoomLabels &) = default ;
    QueryMeetingRoomResponseBodyResultRoomLabels& operator=(QueryMeetingRoomResponseBodyResultRoomLabels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labelId_ != nullptr
        && this->labelName_ != nullptr; };
    // labelId Field Functions 
    bool hasLabelId() const { return this->labelId_ != nullptr;};
    void deleteLabelId() { this->labelId_ = nullptr;};
    inline int64_t labelId() const { DARABONBA_PTR_GET_DEFAULT(labelId_, 0L) };
    inline QueryMeetingRoomResponseBodyResultRoomLabels& setLabelId(int64_t labelId) { DARABONBA_PTR_SET_VALUE(labelId_, labelId) };


    // labelName Field Functions 
    bool hasLabelName() const { return this->labelName_ != nullptr;};
    void deleteLabelName() { this->labelName_ = nullptr;};
    inline string labelName() const { DARABONBA_PTR_GET_DEFAULT(labelName_, "") };
    inline QueryMeetingRoomResponseBodyResultRoomLabels& setLabelName(string labelName) { DARABONBA_PTR_SET_VALUE(labelName_, labelName) };


  protected:
    std::shared_ptr<int64_t> labelId_ = nullptr;
    std::shared_ptr<string> labelName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
