// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTSTRUCTPARTSDATAPART_HPP_
#define ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTSTRUCTPARTSDATAPART_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateRunResponseBodyMessagesContentStructPartsDataPart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRunResponseBodyMessagesContentStructPartsDataPart& obj) { 
      DARABONBA_ANY_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRunResponseBodyMessagesContentStructPartsDataPart& obj) { 
      DARABONBA_ANY_FROM_JSON(data, data_);
    };
    CreateRunResponseBodyMessagesContentStructPartsDataPart() = default ;
    CreateRunResponseBodyMessagesContentStructPartsDataPart(const CreateRunResponseBodyMessagesContentStructPartsDataPart &) = default ;
    CreateRunResponseBodyMessagesContentStructPartsDataPart(CreateRunResponseBodyMessagesContentStructPartsDataPart &&) = default ;
    CreateRunResponseBodyMessagesContentStructPartsDataPart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRunResponseBodyMessagesContentStructPartsDataPart() = default ;
    CreateRunResponseBodyMessagesContentStructPartsDataPart& operator=(const CreateRunResponseBodyMessagesContentStructPartsDataPart &) = default ;
    CreateRunResponseBodyMessagesContentStructPartsDataPart& operator=(CreateRunResponseBodyMessagesContentStructPartsDataPart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & data() const { DARABONBA_GET(data_) };
    Darabonba::Json & data() { DARABONBA_GET(data_) };
    inline CreateRunResponseBodyMessagesContentStructPartsDataPart& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline CreateRunResponseBodyMessagesContentStructPartsDataPart& setData(Darabonba::Json & data) { DARABONBA_SET_RVALUE(data_, data) };


  protected:
    Darabonba::Json data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
