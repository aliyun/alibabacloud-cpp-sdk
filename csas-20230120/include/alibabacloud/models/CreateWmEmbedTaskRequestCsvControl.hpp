// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTCSVCONTROL_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTCSVCONTROL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmEmbedTaskRequestCsvControl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmEmbedTaskRequestCsvControl& obj) { 
      DARABONBA_PTR_TO_JSON(EmbedBitsNumberInEachTime, embedBitsNumberInEachTime_);
      DARABONBA_PTR_TO_JSON(EmbedColumn, embedColumn_);
      DARABONBA_PTR_TO_JSON(EmbedDensity, embedDensity_);
      DARABONBA_PTR_TO_JSON(EmbedPrecision, embedPrecision_);
      DARABONBA_PTR_TO_JSON(EmbedTimePosition, embedTimePosition_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(TimeFormat, timeFormat_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmEmbedTaskRequestCsvControl& obj) { 
      DARABONBA_PTR_FROM_JSON(EmbedBitsNumberInEachTime, embedBitsNumberInEachTime_);
      DARABONBA_PTR_FROM_JSON(EmbedColumn, embedColumn_);
      DARABONBA_PTR_FROM_JSON(EmbedDensity, embedDensity_);
      DARABONBA_PTR_FROM_JSON(EmbedPrecision, embedPrecision_);
      DARABONBA_PTR_FROM_JSON(EmbedTimePosition, embedTimePosition_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(TimeFormat, timeFormat_);
    };
    CreateWmEmbedTaskRequestCsvControl() = default ;
    CreateWmEmbedTaskRequestCsvControl(const CreateWmEmbedTaskRequestCsvControl &) = default ;
    CreateWmEmbedTaskRequestCsvControl(CreateWmEmbedTaskRequestCsvControl &&) = default ;
    CreateWmEmbedTaskRequestCsvControl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmEmbedTaskRequestCsvControl() = default ;
    CreateWmEmbedTaskRequestCsvControl& operator=(const CreateWmEmbedTaskRequestCsvControl &) = default ;
    CreateWmEmbedTaskRequestCsvControl& operator=(CreateWmEmbedTaskRequestCsvControl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->embedBitsNumberInEachTime_ != nullptr
        && this->embedColumn_ != nullptr && this->embedDensity_ != nullptr && this->embedPrecision_ != nullptr && this->embedTimePosition_ != nullptr && this->method_ != nullptr
        && this->timeFormat_ != nullptr; };
    // embedBitsNumberInEachTime Field Functions 
    bool hasEmbedBitsNumberInEachTime() const { return this->embedBitsNumberInEachTime_ != nullptr;};
    void deleteEmbedBitsNumberInEachTime() { this->embedBitsNumberInEachTime_ = nullptr;};
    inline int64_t embedBitsNumberInEachTime() const { DARABONBA_PTR_GET_DEFAULT(embedBitsNumberInEachTime_, 0L) };
    inline CreateWmEmbedTaskRequestCsvControl& setEmbedBitsNumberInEachTime(int64_t embedBitsNumberInEachTime) { DARABONBA_PTR_SET_VALUE(embedBitsNumberInEachTime_, embedBitsNumberInEachTime) };


    // embedColumn Field Functions 
    bool hasEmbedColumn() const { return this->embedColumn_ != nullptr;};
    void deleteEmbedColumn() { this->embedColumn_ = nullptr;};
    inline int64_t embedColumn() const { DARABONBA_PTR_GET_DEFAULT(embedColumn_, 0L) };
    inline CreateWmEmbedTaskRequestCsvControl& setEmbedColumn(int64_t embedColumn) { DARABONBA_PTR_SET_VALUE(embedColumn_, embedColumn) };


    // embedDensity Field Functions 
    bool hasEmbedDensity() const { return this->embedDensity_ != nullptr;};
    void deleteEmbedDensity() { this->embedDensity_ = nullptr;};
    inline string embedDensity() const { DARABONBA_PTR_GET_DEFAULT(embedDensity_, "") };
    inline CreateWmEmbedTaskRequestCsvControl& setEmbedDensity(string embedDensity) { DARABONBA_PTR_SET_VALUE(embedDensity_, embedDensity) };


    // embedPrecision Field Functions 
    bool hasEmbedPrecision() const { return this->embedPrecision_ != nullptr;};
    void deleteEmbedPrecision() { this->embedPrecision_ = nullptr;};
    inline int64_t embedPrecision() const { DARABONBA_PTR_GET_DEFAULT(embedPrecision_, 0L) };
    inline CreateWmEmbedTaskRequestCsvControl& setEmbedPrecision(int64_t embedPrecision) { DARABONBA_PTR_SET_VALUE(embedPrecision_, embedPrecision) };


    // embedTimePosition Field Functions 
    bool hasEmbedTimePosition() const { return this->embedTimePosition_ != nullptr;};
    void deleteEmbedTimePosition() { this->embedTimePosition_ = nullptr;};
    inline string embedTimePosition() const { DARABONBA_PTR_GET_DEFAULT(embedTimePosition_, "") };
    inline CreateWmEmbedTaskRequestCsvControl& setEmbedTimePosition(string embedTimePosition) { DARABONBA_PTR_SET_VALUE(embedTimePosition_, embedTimePosition) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline CreateWmEmbedTaskRequestCsvControl& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // timeFormat Field Functions 
    bool hasTimeFormat() const { return this->timeFormat_ != nullptr;};
    void deleteTimeFormat() { this->timeFormat_ = nullptr;};
    inline string timeFormat() const { DARABONBA_PTR_GET_DEFAULT(timeFormat_, "") };
    inline CreateWmEmbedTaskRequestCsvControl& setTimeFormat(string timeFormat) { DARABONBA_PTR_SET_VALUE(timeFormat_, timeFormat) };


  protected:
    std::shared_ptr<int64_t> embedBitsNumberInEachTime_ = nullptr;
    std::shared_ptr<int64_t> embedColumn_ = nullptr;
    std::shared_ptr<string> embedDensity_ = nullptr;
    std::shared_ptr<int64_t> embedPrecision_ = nullptr;
    std::shared_ptr<string> embedTimePosition_ = nullptr;
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<string> timeFormat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
