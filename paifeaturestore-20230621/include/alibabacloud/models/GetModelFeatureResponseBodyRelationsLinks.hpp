// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELFEATURERESPONSEBODYRELATIONSLINKS_HPP_
#define ALIBABACLOUD_MODELS_GETMODELFEATURERESPONSEBODYRELATIONSLINKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class GetModelFeatureResponseBodyRelationsLinks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelFeatureResponseBodyRelationsLinks& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Link, link_);
      DARABONBA_PTR_TO_JSON(To, to_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelFeatureResponseBodyRelationsLinks& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Link, link_);
      DARABONBA_PTR_FROM_JSON(To, to_);
    };
    GetModelFeatureResponseBodyRelationsLinks() = default ;
    GetModelFeatureResponseBodyRelationsLinks(const GetModelFeatureResponseBodyRelationsLinks &) = default ;
    GetModelFeatureResponseBodyRelationsLinks(GetModelFeatureResponseBodyRelationsLinks &&) = default ;
    GetModelFeatureResponseBodyRelationsLinks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelFeatureResponseBodyRelationsLinks() = default ;
    GetModelFeatureResponseBodyRelationsLinks& operator=(const GetModelFeatureResponseBodyRelationsLinks &) = default ;
    GetModelFeatureResponseBodyRelationsLinks& operator=(GetModelFeatureResponseBodyRelationsLinks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && return this->link_ == nullptr && return this->to_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline GetModelFeatureResponseBodyRelationsLinks& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // link Field Functions 
    bool hasLink() const { return this->link_ != nullptr;};
    void deleteLink() { this->link_ = nullptr;};
    inline string link() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
    inline GetModelFeatureResponseBodyRelationsLinks& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline string to() const { DARABONBA_PTR_GET_DEFAULT(to_, "") };
    inline GetModelFeatureResponseBodyRelationsLinks& setTo(string to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    std::shared_ptr<string> from_ = nullptr;
    std::shared_ptr<string> link_ = nullptr;
    std::shared_ptr<string> to_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
