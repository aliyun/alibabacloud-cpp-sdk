// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COLUMNBUSINESSMETADATA_HPP_
#define ALIBABACLOUD_MODELS_COLUMNBUSINESSMETADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ColumnBusinessMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ColumnBusinessMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, ColumnBusinessMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    ColumnBusinessMetadata() = default ;
    ColumnBusinessMetadata(const ColumnBusinessMetadata &) = default ;
    ColumnBusinessMetadata(ColumnBusinessMetadata &&) = default ;
    ColumnBusinessMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ColumnBusinessMetadata() = default ;
    ColumnBusinessMetadata& operator=(const ColumnBusinessMetadata &) = default ;
    ColumnBusinessMetadata& operator=(ColumnBusinessMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ColumnBusinessMetadata& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
