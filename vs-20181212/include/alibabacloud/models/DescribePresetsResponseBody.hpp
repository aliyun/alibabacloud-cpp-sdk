// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRESETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRESETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribePresetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePresetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Presets, presets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePresetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Presets, presets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePresetsResponseBody() = default ;
    DescribePresetsResponseBody(const DescribePresetsResponseBody &) = default ;
    DescribePresetsResponseBody(DescribePresetsResponseBody &&) = default ;
    DescribePresetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePresetsResponseBody() = default ;
    DescribePresetsResponseBody& operator=(const DescribePresetsResponseBody &) = default ;
    DescribePresetsResponseBody& operator=(DescribePresetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Presets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Presets& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Presets& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Presets() = default ;
      Presets(const Presets &) = default ;
      Presets(Presets &&) = default ;
      Presets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Presets() = default ;
      Presets& operator=(const Presets &) = default ;
      Presets& operator=(Presets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Presets& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Presets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> id_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->id_ == nullptr
        && this->presets_ == nullptr && this->requestId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribePresetsResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // presets Field Functions 
    bool hasPresets() const { return this->presets_ != nullptr;};
    void deletePresets() { this->presets_ = nullptr;};
    inline const vector<DescribePresetsResponseBody::Presets> & getPresets() const { DARABONBA_PTR_GET_CONST(presets_, vector<DescribePresetsResponseBody::Presets>) };
    inline vector<DescribePresetsResponseBody::Presets> getPresets() { DARABONBA_PTR_GET(presets_, vector<DescribePresetsResponseBody::Presets>) };
    inline DescribePresetsResponseBody& setPresets(const vector<DescribePresetsResponseBody::Presets> & presets) { DARABONBA_PTR_SET_VALUE(presets_, presets) };
    inline DescribePresetsResponseBody& setPresets(vector<DescribePresetsResponseBody::Presets> && presets) { DARABONBA_PTR_SET_RVALUE(presets_, presets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePresetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> id_ {};
    shared_ptr<vector<DescribePresetsResponseBody::Presets>> presets_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
