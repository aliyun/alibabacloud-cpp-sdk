// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INDEXKEY_HPP_
#define ALIBABACLOUD_MODELS_INDEXKEY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/IndexJsonKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IndexKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IndexKey& obj) { 
      DARABONBA_PTR_TO_JSON(chn, chn_);
      DARABONBA_PTR_TO_JSON(embedding, embedding_);
      DARABONBA_PTR_TO_JSON(jsonKeys, jsonKeys_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, IndexKey& obj) { 
      DARABONBA_PTR_FROM_JSON(chn, chn_);
      DARABONBA_PTR_FROM_JSON(embedding, embedding_);
      DARABONBA_PTR_FROM_JSON(jsonKeys, jsonKeys_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    IndexKey() = default ;
    IndexKey(const IndexKey &) = default ;
    IndexKey(IndexKey &&) = default ;
    IndexKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IndexKey() = default ;
    IndexKey& operator=(const IndexKey &) = default ;
    IndexKey& operator=(IndexKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chn_ == nullptr
        && this->embedding_ == nullptr && this->jsonKeys_ == nullptr && this->type_ == nullptr; };
    // chn Field Functions 
    bool hasChn() const { return this->chn_ != nullptr;};
    void deleteChn() { this->chn_ = nullptr;};
    inline bool getChn() const { DARABONBA_PTR_GET_DEFAULT(chn_, false) };
    inline IndexKey& setChn(bool chn) { DARABONBA_PTR_SET_VALUE(chn_, chn) };


    // embedding Field Functions 
    bool hasEmbedding() const { return this->embedding_ != nullptr;};
    void deleteEmbedding() { this->embedding_ = nullptr;};
    inline string getEmbedding() const { DARABONBA_PTR_GET_DEFAULT(embedding_, "") };
    inline IndexKey& setEmbedding(string embedding) { DARABONBA_PTR_SET_VALUE(embedding_, embedding) };


    // jsonKeys Field Functions 
    bool hasJsonKeys() const { return this->jsonKeys_ != nullptr;};
    void deleteJsonKeys() { this->jsonKeys_ = nullptr;};
    inline const map<string, IndexJsonKey> & getJsonKeys() const { DARABONBA_PTR_GET_CONST(jsonKeys_, map<string, IndexJsonKey>) };
    inline map<string, IndexJsonKey> getJsonKeys() { DARABONBA_PTR_GET(jsonKeys_, map<string, IndexJsonKey>) };
    inline IndexKey& setJsonKeys(const map<string, IndexJsonKey> & jsonKeys) { DARABONBA_PTR_SET_VALUE(jsonKeys_, jsonKeys) };
    inline IndexKey& setJsonKeys(map<string, IndexJsonKey> && jsonKeys) { DARABONBA_PTR_SET_RVALUE(jsonKeys_, jsonKeys) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline IndexKey& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<bool> chn_ {};
    shared_ptr<string> embedding_ {};
    shared_ptr<map<string, IndexJsonKey>> jsonKeys_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
