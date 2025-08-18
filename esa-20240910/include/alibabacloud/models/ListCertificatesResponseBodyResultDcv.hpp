// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCERTIFICATESRESPONSEBODYRESULTDCV_HPP_
#define ALIBABACLOUD_MODELS_LISTCERTIFICATESRESPONSEBODYRESULTDCV_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListCertificatesResponseBodyResultDCV : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCertificatesResponseBodyResultDCV& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListCertificatesResponseBodyResultDCV& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListCertificatesResponseBodyResultDCV() = default ;
    ListCertificatesResponseBodyResultDCV(const ListCertificatesResponseBodyResultDCV &) = default ;
    ListCertificatesResponseBodyResultDCV(ListCertificatesResponseBodyResultDCV &&) = default ;
    ListCertificatesResponseBodyResultDCV(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCertificatesResponseBodyResultDCV() = default ;
    ListCertificatesResponseBodyResultDCV& operator=(const ListCertificatesResponseBodyResultDCV &) = default ;
    ListCertificatesResponseBodyResultDCV& operator=(ListCertificatesResponseBodyResultDCV &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->key_ != nullptr && this->status_ != nullptr && this->type_ != nullptr && this->value_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListCertificatesResponseBodyResultDCV& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListCertificatesResponseBodyResultDCV& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCertificatesResponseBodyResultDCV& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCertificatesResponseBodyResultDCV& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListCertificatesResponseBodyResultDCV& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The DCV ID.
    std::shared_ptr<string> id_ = nullptr;
    // The DCV name. It is a TXT record name if Type is DNS or URL if Type is HTTP.
    std::shared_ptr<string> key_ = nullptr;
    // The verification status.
    std::shared_ptr<string> status_ = nullptr;
    // The DCV type. Valid values: DNS and HTTP.
    std::shared_ptr<string> type_ = nullptr;
    // The DCV content.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
