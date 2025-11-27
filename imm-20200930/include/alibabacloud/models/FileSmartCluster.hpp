// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILESMARTCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_FILESMARTCLUSTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class FileSmartCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FileSmartCluster& obj) { 
      DARABONBA_PTR_TO_JSON(Similarity, similarity_);
      DARABONBA_PTR_TO_JSON(SmartClusterId, smartClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, FileSmartCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(Similarity, similarity_);
      DARABONBA_PTR_FROM_JSON(SmartClusterId, smartClusterId_);
    };
    FileSmartCluster() = default ;
    FileSmartCluster(const FileSmartCluster &) = default ;
    FileSmartCluster(FileSmartCluster &&) = default ;
    FileSmartCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FileSmartCluster() = default ;
    FileSmartCluster& operator=(const FileSmartCluster &) = default ;
    FileSmartCluster& operator=(FileSmartCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->similarity_ == nullptr
        && return this->smartClusterId_ == nullptr; };
    // similarity Field Functions 
    bool hasSimilarity() const { return this->similarity_ != nullptr;};
    void deleteSimilarity() { this->similarity_ = nullptr;};
    inline float similarity() const { DARABONBA_PTR_GET_DEFAULT(similarity_, 0.0) };
    inline FileSmartCluster& setSimilarity(float similarity) { DARABONBA_PTR_SET_VALUE(similarity_, similarity) };


    // smartClusterId Field Functions 
    bool hasSmartClusterId() const { return this->smartClusterId_ != nullptr;};
    void deleteSmartClusterId() { this->smartClusterId_ = nullptr;};
    inline string smartClusterId() const { DARABONBA_PTR_GET_DEFAULT(smartClusterId_, "") };
    inline FileSmartCluster& setSmartClusterId(string smartClusterId) { DARABONBA_PTR_SET_VALUE(smartClusterId_, smartClusterId) };


  protected:
    std::shared_ptr<float> similarity_ = nullptr;
    std::shared_ptr<string> smartClusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
