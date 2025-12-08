// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITOREXAMINATIONADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MONITOREXAMINATIONADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class MonitorExaminationAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorExaminationAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorExaminationAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    MonitorExaminationAdvanceRequest() = default ;
    MonitorExaminationAdvanceRequest(const MonitorExaminationAdvanceRequest &) = default ;
    MonitorExaminationAdvanceRequest(MonitorExaminationAdvanceRequest &&) = default ;
    MonitorExaminationAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorExaminationAdvanceRequest() = default ;
    MonitorExaminationAdvanceRequest& operator=(const MonitorExaminationAdvanceRequest &) = default ;
    MonitorExaminationAdvanceRequest& operator=(MonitorExaminationAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURLObject_ == nullptr
        && return this->type_ == nullptr; };
    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline MonitorExaminationAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int64_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
    inline MonitorExaminationAdvanceRequest& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
