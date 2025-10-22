// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERINTENTIONNOTESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERINTENTIONNOTESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class ListUserIntentionNotesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserIntentionNotesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Note, note_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserIntentionNotesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
    };
    ListUserIntentionNotesResponseBodyData() = default ;
    ListUserIntentionNotesResponseBodyData(const ListUserIntentionNotesResponseBodyData &) = default ;
    ListUserIntentionNotesResponseBodyData(ListUserIntentionNotesResponseBodyData &&) = default ;
    ListUserIntentionNotesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserIntentionNotesResponseBodyData() = default ;
    ListUserIntentionNotesResponseBodyData& operator=(const ListUserIntentionNotesResponseBodyData &) = default ;
    ListUserIntentionNotesResponseBodyData& operator=(ListUserIntentionNotesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->note_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListUserIntentionNotesResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline ListUserIntentionNotesResponseBodyData& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> note_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
