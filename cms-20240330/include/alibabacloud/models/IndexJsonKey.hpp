// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INDEXJSONKEY_HPP_
#define ALIBABACLOUD_MODELS_INDEXJSONKEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IndexJsonKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IndexJsonKey& obj) { 
      DARABONBA_PTR_TO_JSON(chn, chn_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, IndexJsonKey& obj) { 
      DARABONBA_PTR_FROM_JSON(chn, chn_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    IndexJsonKey() = default ;
    IndexJsonKey(const IndexJsonKey &) = default ;
    IndexJsonKey(IndexJsonKey &&) = default ;
    IndexJsonKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IndexJsonKey() = default ;
    IndexJsonKey& operator=(const IndexJsonKey &) = default ;
    IndexJsonKey& operator=(IndexJsonKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chn_ == nullptr
        && this->type_ == nullptr; };
    // chn Field Functions 
    bool hasChn() const { return this->chn_ != nullptr;};
    void deleteChn() { this->chn_ = nullptr;};
    inline string getChn() const { DARABONBA_PTR_GET_DEFAULT(chn_, "") };
    inline IndexJsonKey& setChn(string chn) { DARABONBA_PTR_SET_VALUE(chn_, chn) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline IndexJsonKey& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> chn_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
