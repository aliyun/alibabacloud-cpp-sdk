// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROCEEDING_HPP_
#define ALIBABACLOUD_MODELS_PROCEEDING_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Proceeding.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class Proceeding : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Proceeding& obj) { 
      DARABONBA_ANY_TO_JSON(detail, detail_);
      DARABONBA_PTR_TO_JSON(progress, progress_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(subTasks, subTasks_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, Proceeding& obj) { 
      DARABONBA_ANY_FROM_JSON(detail, detail_);
      DARABONBA_PTR_FROM_JSON(progress, progress_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(subTasks, subTasks_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    Proceeding() = default ;
    Proceeding(const Proceeding &) = default ;
    Proceeding(Proceeding &&) = default ;
    Proceeding(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Proceeding() = default ;
    Proceeding& operator=(const Proceeding &) = default ;
    Proceeding& operator=(Proceeding &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detail_ == nullptr
        && this->progress_ == nullptr && this->status_ == nullptr && this->subTasks_ == nullptr && this->type_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline     const Darabonba::Json & getDetail() const { DARABONBA_GET(detail_) };
    Darabonba::Json & getDetail() { DARABONBA_GET(detail_) };
    inline Proceeding& setDetail(const Darabonba::Json & detail) { DARABONBA_SET_VALUE(detail_, detail) };
    inline Proceeding& setDetail(Darabonba::Json && detail) { DARABONBA_SET_RVALUE(detail_, detail) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline float getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0.0) };
    inline Proceeding& setProgress(float progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline Proceeding& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subTasks Field Functions 
    bool hasSubTasks() const { return this->subTasks_ != nullptr;};
    void deleteSubTasks() { this->subTasks_ = nullptr;};
    inline const Proceeding & getSubTasks() const { DARABONBA_PTR_GET_CONST(subTasks_, Proceeding) };
    inline Proceeding getSubTasks() { DARABONBA_PTR_GET(subTasks_, Proceeding) };
    inline Proceeding& setSubTasks(const Proceeding & subTasks) { DARABONBA_PTR_SET_VALUE(subTasks_, subTasks) };
    inline Proceeding& setSubTasks(Proceeding && subTasks) { DARABONBA_PTR_SET_RVALUE(subTasks_, subTasks) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline Proceeding& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    Darabonba::Json detail_ {};
    shared_ptr<float> progress_ {};
    shared_ptr<string> status_ {};
    shared_ptr<Proceeding> subTasks_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
