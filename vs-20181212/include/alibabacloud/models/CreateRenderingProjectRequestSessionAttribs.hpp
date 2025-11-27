// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERENDERINGPROJECTREQUESTSESSIONATTRIBS_HPP_
#define ALIBABACLOUD_MODELS_CREATERENDERINGPROJECTREQUESTSESSIONATTRIBS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class CreateRenderingProjectRequestSessionAttribs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRenderingProjectRequestSessionAttribs& obj) { 
      DARABONBA_PTR_TO_JSON(StartMode, startMode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRenderingProjectRequestSessionAttribs& obj) { 
      DARABONBA_PTR_FROM_JSON(StartMode, startMode_);
    };
    CreateRenderingProjectRequestSessionAttribs() = default ;
    CreateRenderingProjectRequestSessionAttribs(const CreateRenderingProjectRequestSessionAttribs &) = default ;
    CreateRenderingProjectRequestSessionAttribs(CreateRenderingProjectRequestSessionAttribs &&) = default ;
    CreateRenderingProjectRequestSessionAttribs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRenderingProjectRequestSessionAttribs() = default ;
    CreateRenderingProjectRequestSessionAttribs& operator=(const CreateRenderingProjectRequestSessionAttribs &) = default ;
    CreateRenderingProjectRequestSessionAttribs& operator=(CreateRenderingProjectRequestSessionAttribs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->startMode_ == nullptr; };
    // startMode Field Functions 
    bool hasStartMode() const { return this->startMode_ != nullptr;};
    void deleteStartMode() { this->startMode_ = nullptr;};
    inline string startMode() const { DARABONBA_PTR_GET_DEFAULT(startMode_, "") };
    inline CreateRenderingProjectRequestSessionAttribs& setStartMode(string startMode) { DARABONBA_PTR_SET_VALUE(startMode_, startMode) };


  protected:
    std::shared_ptr<string> startMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
