// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKRUNRESPONSEBODYRESULTWRITER_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKRUNRESPONSEBODYRESULTWRITER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetCheckRunResponseBodyResultWriter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckRunResponseBodyResultWriter& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(logoUrl, logoUrl_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(slug, slug_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckRunResponseBodyResultWriter& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(logoUrl, logoUrl_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(slug, slug_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetCheckRunResponseBodyResultWriter() = default ;
    GetCheckRunResponseBodyResultWriter(const GetCheckRunResponseBodyResultWriter &) = default ;
    GetCheckRunResponseBodyResultWriter(GetCheckRunResponseBodyResultWriter &&) = default ;
    GetCheckRunResponseBodyResultWriter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckRunResponseBodyResultWriter() = default ;
    GetCheckRunResponseBodyResultWriter& operator=(const GetCheckRunResponseBodyResultWriter &) = default ;
    GetCheckRunResponseBodyResultWriter& operator=(GetCheckRunResponseBodyResultWriter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->logoUrl_ == nullptr && return this->name_ == nullptr && return this->slug_ == nullptr && return this->type_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetCheckRunResponseBodyResultWriter& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // logoUrl Field Functions 
    bool hasLogoUrl() const { return this->logoUrl_ != nullptr;};
    void deleteLogoUrl() { this->logoUrl_ = nullptr;};
    inline string logoUrl() const { DARABONBA_PTR_GET_DEFAULT(logoUrl_, "") };
    inline GetCheckRunResponseBodyResultWriter& setLogoUrl(string logoUrl) { DARABONBA_PTR_SET_VALUE(logoUrl_, logoUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetCheckRunResponseBodyResultWriter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // slug Field Functions 
    bool hasSlug() const { return this->slug_ != nullptr;};
    void deleteSlug() { this->slug_ = nullptr;};
    inline string slug() const { DARABONBA_PTR_GET_DEFAULT(slug_, "") };
    inline GetCheckRunResponseBodyResultWriter& setSlug(string slug) { DARABONBA_PTR_SET_VALUE(slug_, slug) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetCheckRunResponseBodyResultWriter& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> logoUrl_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> slug_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
