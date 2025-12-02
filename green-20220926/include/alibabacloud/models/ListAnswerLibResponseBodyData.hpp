// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANSWERLIBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTANSWERLIBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListAnswerLibResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnswerLibResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AnswerCount, answerCount_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(LibName, libName_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnswerLibResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AnswerCount, answerCount_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(LibName, libName_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    ListAnswerLibResponseBodyData() = default ;
    ListAnswerLibResponseBodyData(const ListAnswerLibResponseBodyData &) = default ;
    ListAnswerLibResponseBodyData(ListAnswerLibResponseBodyData &&) = default ;
    ListAnswerLibResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnswerLibResponseBodyData() = default ;
    ListAnswerLibResponseBodyData& operator=(const ListAnswerLibResponseBodyData &) = default ;
    ListAnswerLibResponseBodyData& operator=(ListAnswerLibResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answerCount_ == nullptr
        && return this->gmtModified_ == nullptr && return this->libId_ == nullptr && return this->libName_ == nullptr && return this->uid_ == nullptr; };
    // answerCount Field Functions 
    bool hasAnswerCount() const { return this->answerCount_ != nullptr;};
    void deleteAnswerCount() { this->answerCount_ = nullptr;};
    inline int32_t answerCount() const { DARABONBA_PTR_GET_DEFAULT(answerCount_, 0) };
    inline ListAnswerLibResponseBodyData& setAnswerCount(int32_t answerCount) { DARABONBA_PTR_SET_VALUE(answerCount_, answerCount) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListAnswerLibResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string libId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline ListAnswerLibResponseBodyData& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // libName Field Functions 
    bool hasLibName() const { return this->libName_ != nullptr;};
    void deleteLibName() { this->libName_ = nullptr;};
    inline string libName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
    inline ListAnswerLibResponseBodyData& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline ListAnswerLibResponseBodyData& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    std::shared_ptr<int32_t> answerCount_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> libId_ = nullptr;
    std::shared_ptr<string> libName_ = nullptr;
    // UID。
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
