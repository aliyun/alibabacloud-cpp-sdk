// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEAICOACHTASKREQUESTSTUDENTLIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEAICOACHTASKREQUESTSTUDENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchCreateAICoachTaskRequestStudentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateAICoachTaskRequestStudentList& obj) { 
      DARABONBA_PTR_TO_JSON(studentAudioUrl, studentAudioUrl_);
      DARABONBA_PTR_TO_JSON(studentId, studentId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateAICoachTaskRequestStudentList& obj) { 
      DARABONBA_PTR_FROM_JSON(studentAudioUrl, studentAudioUrl_);
      DARABONBA_PTR_FROM_JSON(studentId, studentId_);
    };
    BatchCreateAICoachTaskRequestStudentList() = default ;
    BatchCreateAICoachTaskRequestStudentList(const BatchCreateAICoachTaskRequestStudentList &) = default ;
    BatchCreateAICoachTaskRequestStudentList(BatchCreateAICoachTaskRequestStudentList &&) = default ;
    BatchCreateAICoachTaskRequestStudentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateAICoachTaskRequestStudentList() = default ;
    BatchCreateAICoachTaskRequestStudentList& operator=(const BatchCreateAICoachTaskRequestStudentList &) = default ;
    BatchCreateAICoachTaskRequestStudentList& operator=(BatchCreateAICoachTaskRequestStudentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->studentAudioUrl_ == nullptr
        && return this->studentId_ == nullptr; };
    // studentAudioUrl Field Functions 
    bool hasStudentAudioUrl() const { return this->studentAudioUrl_ != nullptr;};
    void deleteStudentAudioUrl() { this->studentAudioUrl_ = nullptr;};
    inline string studentAudioUrl() const { DARABONBA_PTR_GET_DEFAULT(studentAudioUrl_, "") };
    inline BatchCreateAICoachTaskRequestStudentList& setStudentAudioUrl(string studentAudioUrl) { DARABONBA_PTR_SET_VALUE(studentAudioUrl_, studentAudioUrl) };


    // studentId Field Functions 
    bool hasStudentId() const { return this->studentId_ != nullptr;};
    void deleteStudentId() { this->studentId_ = nullptr;};
    inline string studentId() const { DARABONBA_PTR_GET_DEFAULT(studentId_, "") };
    inline BatchCreateAICoachTaskRequestStudentList& setStudentId(string studentId) { DARABONBA_PTR_SET_VALUE(studentId_, studentId) };


  protected:
    std::shared_ptr<string> studentAudioUrl_ = nullptr;
    std::shared_ptr<string> studentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
