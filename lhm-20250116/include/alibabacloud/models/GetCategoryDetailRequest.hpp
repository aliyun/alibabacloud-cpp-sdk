// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATEGORYDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCATEGORYDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetCategoryDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCategoryDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(target, target_);
    };
    friend void from_json(const Darabonba::Json& j, GetCategoryDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(target, target_);
    };
    GetCategoryDetailRequest() = default ;
    GetCategoryDetailRequest(const GetCategoryDetailRequest &) = default ;
    GetCategoryDetailRequest(GetCategoryDetailRequest &&) = default ;
    GetCategoryDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCategoryDetailRequest() = default ;
    GetCategoryDetailRequest& operator=(const GetCategoryDetailRequest &) = default ;
    GetCategoryDetailRequest& operator=(GetCategoryDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->source_ == nullptr && this->target_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline GetCategoryDetailRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetCategoryDetailRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline GetCategoryDetailRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    // The list of category paths.
    shared_ptr<string> category_ {};
    // The source dialect.
    shared_ptr<string> source_ {};
    // The target dialect.
    shared_ptr<string> target_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
