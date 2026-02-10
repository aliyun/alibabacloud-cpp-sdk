// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERIMAGESECURITYSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERIMAGESECURITYSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterImageSecuritySummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterImageSecuritySummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterImageEvent, clusterImageEvent_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterImageSecuritySummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterImageEvent, clusterImageEvent_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterImageSecuritySummaryResponseBody() = default ;
    DescribeClusterImageSecuritySummaryResponseBody(const DescribeClusterImageSecuritySummaryResponseBody &) = default ;
    DescribeClusterImageSecuritySummaryResponseBody(DescribeClusterImageSecuritySummaryResponseBody &&) = default ;
    DescribeClusterImageSecuritySummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterImageSecuritySummaryResponseBody() = default ;
    DescribeClusterImageSecuritySummaryResponseBody& operator=(const DescribeClusterImageSecuritySummaryResponseBody &) = default ;
    DescribeClusterImageSecuritySummaryResponseBody& operator=(DescribeClusterImageSecuritySummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClusterImageEvent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterImageEvent& obj) { 
        DARABONBA_PTR_TO_JSON(ImageBaseline, imageBaseline_);
        DARABONBA_PTR_TO_JSON(ImageCveVul, imageCveVul_);
        DARABONBA_PTR_TO_JSON(ImageMaliciousFile, imageMaliciousFile_);
        DARABONBA_PTR_TO_JSON(ImageScaVul, imageScaVul_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterImageEvent& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageBaseline, imageBaseline_);
        DARABONBA_PTR_FROM_JSON(ImageCveVul, imageCveVul_);
        DARABONBA_PTR_FROM_JSON(ImageMaliciousFile, imageMaliciousFile_);
        DARABONBA_PTR_FROM_JSON(ImageScaVul, imageScaVul_);
      };
      ClusterImageEvent() = default ;
      ClusterImageEvent(const ClusterImageEvent &) = default ;
      ClusterImageEvent(ClusterImageEvent &&) = default ;
      ClusterImageEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterImageEvent() = default ;
      ClusterImageEvent& operator=(const ClusterImageEvent &) = default ;
      ClusterImageEvent& operator=(ClusterImageEvent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ImageScaVul : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImageScaVul& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        };
        friend void from_json(const Darabonba::Json& j, ImageScaVul& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        };
        ImageScaVul() = default ;
        ImageScaVul(const ImageScaVul &) = default ;
        ImageScaVul(ImageScaVul &&) = default ;
        ImageScaVul(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImageScaVul() = default ;
        ImageScaVul& operator=(const ImageScaVul &) = default ;
        ImageScaVul& operator=(ImageScaVul &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->riskLevel_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline ImageScaVul& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline ImageScaVul& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      protected:
        // The number of image application vulnerabilities.
        shared_ptr<int64_t> count_ {};
        // The alert level. Valid values:
        // 
        // *   **asap**: high. You must fix the vulnerability at the earliest opportunity.
        // *   **nntf**: medium. You can fix the vulnerability based on your business requirements.
        // *   **later**: low. You can ignore the vulnerability.
        shared_ptr<string> riskLevel_ {};
      };

      class ImageMaliciousFile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImageMaliciousFile& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        };
        friend void from_json(const Darabonba::Json& j, ImageMaliciousFile& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        };
        ImageMaliciousFile() = default ;
        ImageMaliciousFile(const ImageMaliciousFile &) = default ;
        ImageMaliciousFile(ImageMaliciousFile &&) = default ;
        ImageMaliciousFile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImageMaliciousFile() = default ;
        ImageMaliciousFile& operator=(const ImageMaliciousFile &) = default ;
        ImageMaliciousFile& operator=(ImageMaliciousFile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->riskLevel_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline ImageMaliciousFile& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline ImageMaliciousFile& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      protected:
        // The number of malicious samples.
        shared_ptr<int64_t> count_ {};
        // The risk level. Valid values:
        // 
        // *   **high**
        // *   **medium**
        // *   **low**
        shared_ptr<string> riskLevel_ {};
      };

      class ImageCveVul : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImageCveVul& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        };
        friend void from_json(const Darabonba::Json& j, ImageCveVul& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        };
        ImageCveVul() = default ;
        ImageCveVul(const ImageCveVul &) = default ;
        ImageCveVul(ImageCveVul &&) = default ;
        ImageCveVul(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImageCveVul() = default ;
        ImageCveVul& operator=(const ImageCveVul &) = default ;
        ImageCveVul& operator=(ImageCveVul &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->riskLevel_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline ImageCveVul& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline ImageCveVul& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      protected:
        // The number of vulnerabilities.
        shared_ptr<int64_t> count_ {};
        // The alert level. Valid values:
        // 
        // *   **asap**: high. You must fix the vulnerability at the earliest opportunity.
        // *   **nntf**: medium. You can fix the vulnerability based on your business requirements.
        // *   **later**: low. You can ignore the vulnerability.
        shared_ptr<string> riskLevel_ {};
      };

      class ImageBaseline : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImageBaseline& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        };
        friend void from_json(const Darabonba::Json& j, ImageBaseline& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        };
        ImageBaseline() = default ;
        ImageBaseline(const ImageBaseline &) = default ;
        ImageBaseline(ImageBaseline &&) = default ;
        ImageBaseline(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImageBaseline() = default ;
        ImageBaseline& operator=(const ImageBaseline &) = default ;
        ImageBaseline& operator=(ImageBaseline &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->riskLevel_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline ImageBaseline& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline ImageBaseline& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      protected:
        // The number of baselines.
        shared_ptr<int64_t> count_ {};
        // The risk level. Valid values:
        // 
        // *   **high**
        // *   **medium**
        // *   **low**
        shared_ptr<string> riskLevel_ {};
      };

      virtual bool empty() const override { return this->imageBaseline_ == nullptr
        && this->imageCveVul_ == nullptr && this->imageMaliciousFile_ == nullptr && this->imageScaVul_ == nullptr; };
      // imageBaseline Field Functions 
      bool hasImageBaseline() const { return this->imageBaseline_ != nullptr;};
      void deleteImageBaseline() { this->imageBaseline_ = nullptr;};
      inline const vector<ClusterImageEvent::ImageBaseline> & getImageBaseline() const { DARABONBA_PTR_GET_CONST(imageBaseline_, vector<ClusterImageEvent::ImageBaseline>) };
      inline vector<ClusterImageEvent::ImageBaseline> getImageBaseline() { DARABONBA_PTR_GET(imageBaseline_, vector<ClusterImageEvent::ImageBaseline>) };
      inline ClusterImageEvent& setImageBaseline(const vector<ClusterImageEvent::ImageBaseline> & imageBaseline) { DARABONBA_PTR_SET_VALUE(imageBaseline_, imageBaseline) };
      inline ClusterImageEvent& setImageBaseline(vector<ClusterImageEvent::ImageBaseline> && imageBaseline) { DARABONBA_PTR_SET_RVALUE(imageBaseline_, imageBaseline) };


      // imageCveVul Field Functions 
      bool hasImageCveVul() const { return this->imageCveVul_ != nullptr;};
      void deleteImageCveVul() { this->imageCveVul_ = nullptr;};
      inline const vector<ClusterImageEvent::ImageCveVul> & getImageCveVul() const { DARABONBA_PTR_GET_CONST(imageCveVul_, vector<ClusterImageEvent::ImageCveVul>) };
      inline vector<ClusterImageEvent::ImageCveVul> getImageCveVul() { DARABONBA_PTR_GET(imageCveVul_, vector<ClusterImageEvent::ImageCveVul>) };
      inline ClusterImageEvent& setImageCveVul(const vector<ClusterImageEvent::ImageCveVul> & imageCveVul) { DARABONBA_PTR_SET_VALUE(imageCveVul_, imageCveVul) };
      inline ClusterImageEvent& setImageCveVul(vector<ClusterImageEvent::ImageCveVul> && imageCveVul) { DARABONBA_PTR_SET_RVALUE(imageCveVul_, imageCveVul) };


      // imageMaliciousFile Field Functions 
      bool hasImageMaliciousFile() const { return this->imageMaliciousFile_ != nullptr;};
      void deleteImageMaliciousFile() { this->imageMaliciousFile_ = nullptr;};
      inline const vector<ClusterImageEvent::ImageMaliciousFile> & getImageMaliciousFile() const { DARABONBA_PTR_GET_CONST(imageMaliciousFile_, vector<ClusterImageEvent::ImageMaliciousFile>) };
      inline vector<ClusterImageEvent::ImageMaliciousFile> getImageMaliciousFile() { DARABONBA_PTR_GET(imageMaliciousFile_, vector<ClusterImageEvent::ImageMaliciousFile>) };
      inline ClusterImageEvent& setImageMaliciousFile(const vector<ClusterImageEvent::ImageMaliciousFile> & imageMaliciousFile) { DARABONBA_PTR_SET_VALUE(imageMaliciousFile_, imageMaliciousFile) };
      inline ClusterImageEvent& setImageMaliciousFile(vector<ClusterImageEvent::ImageMaliciousFile> && imageMaliciousFile) { DARABONBA_PTR_SET_RVALUE(imageMaliciousFile_, imageMaliciousFile) };


      // imageScaVul Field Functions 
      bool hasImageScaVul() const { return this->imageScaVul_ != nullptr;};
      void deleteImageScaVul() { this->imageScaVul_ = nullptr;};
      inline const vector<ClusterImageEvent::ImageScaVul> & getImageScaVul() const { DARABONBA_PTR_GET_CONST(imageScaVul_, vector<ClusterImageEvent::ImageScaVul>) };
      inline vector<ClusterImageEvent::ImageScaVul> getImageScaVul() { DARABONBA_PTR_GET(imageScaVul_, vector<ClusterImageEvent::ImageScaVul>) };
      inline ClusterImageEvent& setImageScaVul(const vector<ClusterImageEvent::ImageScaVul> & imageScaVul) { DARABONBA_PTR_SET_VALUE(imageScaVul_, imageScaVul) };
      inline ClusterImageEvent& setImageScaVul(vector<ClusterImageEvent::ImageScaVul> && imageScaVul) { DARABONBA_PTR_SET_RVALUE(imageScaVul_, imageScaVul) };


    protected:
      // The information about image baseline risks.
      shared_ptr<vector<ClusterImageEvent::ImageBaseline>> imageBaseline_ {};
      // The information about image system vulnerabilities.
      shared_ptr<vector<ClusterImageEvent::ImageCveVul>> imageCveVul_ {};
      // The information about malicious image samples.
      shared_ptr<vector<ClusterImageEvent::ImageMaliciousFile>> imageMaliciousFile_ {};
      // The information about image application vulnerabilities.
      shared_ptr<vector<ClusterImageEvent::ImageScaVul>> imageScaVul_ {};
    };

    virtual bool empty() const override { return this->clusterImageEvent_ == nullptr
        && this->requestId_ == nullptr; };
    // clusterImageEvent Field Functions 
    bool hasClusterImageEvent() const { return this->clusterImageEvent_ != nullptr;};
    void deleteClusterImageEvent() { this->clusterImageEvent_ = nullptr;};
    inline const DescribeClusterImageSecuritySummaryResponseBody::ClusterImageEvent & getClusterImageEvent() const { DARABONBA_PTR_GET_CONST(clusterImageEvent_, DescribeClusterImageSecuritySummaryResponseBody::ClusterImageEvent) };
    inline DescribeClusterImageSecuritySummaryResponseBody::ClusterImageEvent getClusterImageEvent() { DARABONBA_PTR_GET(clusterImageEvent_, DescribeClusterImageSecuritySummaryResponseBody::ClusterImageEvent) };
    inline DescribeClusterImageSecuritySummaryResponseBody& setClusterImageEvent(const DescribeClusterImageSecuritySummaryResponseBody::ClusterImageEvent & clusterImageEvent) { DARABONBA_PTR_SET_VALUE(clusterImageEvent_, clusterImageEvent) };
    inline DescribeClusterImageSecuritySummaryResponseBody& setClusterImageEvent(DescribeClusterImageSecuritySummaryResponseBody::ClusterImageEvent && clusterImageEvent) { DARABONBA_PTR_SET_RVALUE(clusterImageEvent_, clusterImageEvent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterImageSecuritySummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the image-related security events.
    shared_ptr<DescribeClusterImageSecuritySummaryResponseBody::ClusterImageEvent> clusterImageEvent_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
