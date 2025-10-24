// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEMPLATERESPONSEBODYTEMPLATECONTAINER_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEMPLATERESPONSEBODYTEMPLATECONTAINER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UpdateTemplateResponseBodyTemplateContainer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTemplateResponseBodyTemplateContainer& obj) { 
      DARABONBA_PTR_TO_JSON(Format, format_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTemplateResponseBodyTemplateContainer& obj) { 
      DARABONBA_PTR_FROM_JSON(Format, format_);
    };
    UpdateTemplateResponseBodyTemplateContainer() = default ;
    UpdateTemplateResponseBodyTemplateContainer(const UpdateTemplateResponseBodyTemplateContainer &) = default ;
    UpdateTemplateResponseBodyTemplateContainer(UpdateTemplateResponseBodyTemplateContainer &&) = default ;
    UpdateTemplateResponseBodyTemplateContainer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTemplateResponseBodyTemplateContainer() = default ;
    UpdateTemplateResponseBodyTemplateContainer& operator=(const UpdateTemplateResponseBodyTemplateContainer &) = default ;
    UpdateTemplateResponseBodyTemplateContainer& operator=(UpdateTemplateResponseBodyTemplateContainer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->format_ == nullptr; };
    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline UpdateTemplateResponseBodyTemplateContainer& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


  protected:
    // The container format.
    std::shared_ptr<string> format_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
