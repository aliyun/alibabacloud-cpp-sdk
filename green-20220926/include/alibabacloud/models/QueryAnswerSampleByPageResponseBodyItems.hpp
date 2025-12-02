// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYANSWERSAMPLEBYPAGERESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_QUERYANSWERSAMPLEBYPAGERESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class QueryAnswerSampleByPageResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAnswerSampleByPageResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Answer, answer_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAnswerSampleByPageResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Answer, answer_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    QueryAnswerSampleByPageResponseBodyItems() = default ;
    QueryAnswerSampleByPageResponseBodyItems(const QueryAnswerSampleByPageResponseBodyItems &) = default ;
    QueryAnswerSampleByPageResponseBodyItems(QueryAnswerSampleByPageResponseBodyItems &&) = default ;
    QueryAnswerSampleByPageResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAnswerSampleByPageResponseBodyItems() = default ;
    QueryAnswerSampleByPageResponseBodyItems& operator=(const QueryAnswerSampleByPageResponseBodyItems &) = default ;
    QueryAnswerSampleByPageResponseBodyItems& operator=(QueryAnswerSampleByPageResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answer_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->id_ == nullptr && return this->libId_ == nullptr && return this->uid_ == nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline string answer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
    inline QueryAnswerSampleByPageResponseBodyItems& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QueryAnswerSampleByPageResponseBodyItems& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryAnswerSampleByPageResponseBodyItems& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string libId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline QueryAnswerSampleByPageResponseBodyItems& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline QueryAnswerSampleByPageResponseBodyItems& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    std::shared_ptr<string> answer_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> libId_ = nullptr;
    // UID。
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
