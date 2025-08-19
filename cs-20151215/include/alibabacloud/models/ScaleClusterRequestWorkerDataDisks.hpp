// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALECLUSTERREQUESTWORKERDATADISKS_HPP_
#define ALIBABACLOUD_MODELS_SCALECLUSTERREQUESTWORKERDATADISKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ScaleClusterRequestWorkerDataDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleClusterRequestWorkerDataDisks& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleClusterRequestWorkerDataDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(size, size_);
    };
    ScaleClusterRequestWorkerDataDisks() = default ;
    ScaleClusterRequestWorkerDataDisks(const ScaleClusterRequestWorkerDataDisks &) = default ;
    ScaleClusterRequestWorkerDataDisks(ScaleClusterRequestWorkerDataDisks &&) = default ;
    ScaleClusterRequestWorkerDataDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleClusterRequestWorkerDataDisks() = default ;
    ScaleClusterRequestWorkerDataDisks& operator=(const ScaleClusterRequestWorkerDataDisks &) = default ;
    ScaleClusterRequestWorkerDataDisks& operator=(ScaleClusterRequestWorkerDataDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->encrypted_ != nullptr && this->size_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ScaleClusterRequestWorkerDataDisks& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline string encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, "") };
    inline ScaleClusterRequestWorkerDataDisks& setEncrypted(string encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline ScaleClusterRequestWorkerDataDisks& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> encrypted_ = nullptr;
    std::shared_ptr<string> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
