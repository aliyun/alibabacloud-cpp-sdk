// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITOREXAMINATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MONITOREXAMINATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class MonitorExaminationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorExaminationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorExaminationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    MonitorExaminationRequest() = default ;
    MonitorExaminationRequest(const MonitorExaminationRequest &) = default ;
    MonitorExaminationRequest(MonitorExaminationRequest &&) = default ;
    MonitorExaminationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorExaminationRequest() = default ;
    MonitorExaminationRequest& operator=(const MonitorExaminationRequest &) = default ;
    MonitorExaminationRequest& operator=(MonitorExaminationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURL_ == nullptr
        && return this->type_ == nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline MonitorExaminationRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int64_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
    inline MonitorExaminationRequest& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
