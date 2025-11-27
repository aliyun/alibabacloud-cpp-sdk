// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROW_HPP_
#define ALIBABACLOUD_MODELS_ROW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/KeyValuePair.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Row : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Row& obj) { 
      DARABONBA_PTR_TO_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, Row& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    Row() = default ;
    Row(const Row &) = default ;
    Row(Row &&) = default ;
    Row(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Row() = default ;
    Row& operator=(const Row &) = default ;
    Row& operator=(Row &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customLabels_ == nullptr
        && return this->URI_ == nullptr; };
    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline const vector<KeyValuePair> & customLabels() const { DARABONBA_PTR_GET_CONST(customLabels_, vector<KeyValuePair>) };
    inline vector<KeyValuePair> customLabels() { DARABONBA_PTR_GET(customLabels_, vector<KeyValuePair>) };
    inline Row& setCustomLabels(const vector<KeyValuePair> & customLabels) { DARABONBA_PTR_SET_VALUE(customLabels_, customLabels) };
    inline Row& setCustomLabels(vector<KeyValuePair> && customLabels) { DARABONBA_PTR_SET_RVALUE(customLabels_, customLabels) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline Row& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    std::shared_ptr<vector<KeyValuePair>> customLabels_ = nullptr;
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
