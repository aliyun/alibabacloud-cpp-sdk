// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFACERECORDRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_ADDFACERECORDRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class AddFaceRecordResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFaceRecordResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ExtFaceInfo, extFaceInfo_);
      DARABONBA_PTR_TO_JSON(Passed, passed_);
    };
    friend void from_json(const Darabonba::Json& j, AddFaceRecordResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtFaceInfo, extFaceInfo_);
      DARABONBA_PTR_FROM_JSON(Passed, passed_);
    };
    AddFaceRecordResponseBodyResult() = default ;
    AddFaceRecordResponseBodyResult(const AddFaceRecordResponseBodyResult &) = default ;
    AddFaceRecordResponseBodyResult(AddFaceRecordResponseBodyResult &&) = default ;
    AddFaceRecordResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFaceRecordResponseBodyResult() = default ;
    AddFaceRecordResponseBodyResult& operator=(const AddFaceRecordResponseBodyResult &) = default ;
    AddFaceRecordResponseBodyResult& operator=(AddFaceRecordResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extFaceInfo_ == nullptr
        && return this->passed_ == nullptr; };
    // extFaceInfo Field Functions 
    bool hasExtFaceInfo() const { return this->extFaceInfo_ != nullptr;};
    void deleteExtFaceInfo() { this->extFaceInfo_ = nullptr;};
    inline string extFaceInfo() const { DARABONBA_PTR_GET_DEFAULT(extFaceInfo_, "") };
    inline AddFaceRecordResponseBodyResult& setExtFaceInfo(string extFaceInfo) { DARABONBA_PTR_SET_VALUE(extFaceInfo_, extFaceInfo) };


    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline string passed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
    inline AddFaceRecordResponseBodyResult& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


  protected:
    std::shared_ptr<string> extFaceInfo_ = nullptr;
    std::shared_ptr<string> passed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
