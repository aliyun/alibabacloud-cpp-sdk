// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKGROUNDPICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKGROUNDPICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class CreateBackgroundPicResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBackgroundPicResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBackgroundPicResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    CreateBackgroundPicResponseBodyData() = default ;
    CreateBackgroundPicResponseBodyData(const CreateBackgroundPicResponseBodyData &) = default ;
    CreateBackgroundPicResponseBodyData(CreateBackgroundPicResponseBodyData &&) = default ;
    CreateBackgroundPicResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBackgroundPicResponseBodyData() = default ;
    CreateBackgroundPicResponseBodyData& operator=(const CreateBackgroundPicResponseBodyData &) = default ;
    CreateBackgroundPicResponseBodyData& operator=(CreateBackgroundPicResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateBackgroundPicResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
